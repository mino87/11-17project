#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

#define BINGO_RES_UNFINISHED   -1
#define BINGO_RES_FINISHED 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int check_gameEnd(void)
{
    int selNum=0;
	int res = BINGO_RES_UNFINISHED;
	if (bingo_countCompletedLine() >= N_LINE)
	    res = BINGO_RES_FINISHED;
	    
	    return res;
}

int get_number(void)
{
	
	int selNum=0;
	do 
	{
		printf("select a number : ");
		scanf("%d",&selNum);
		fflush(stdin);
		
		if (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		}
	} while (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT); 
	  
	return selNum;
}




int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	printf("***********************************************************\n");
	printf("===========================================================\n");
	printf("                        BINGO GAME                         \n");
	printf("***********************************************************\n");
	printf("===========================================================\n");
	
	//게임 
	//빙고보드 만들기
	/* 
	//
	//반복문이용 
	/*while(줄의수<2)
	{	
	    빙고보드 계속 출력
	    완성된 줄수 출력
	    숫자 입력받기 출력
	    보드상태 업데이트  	
	}
	*/
	

	
	
	
	bingo_init();
	
	while(check_gameEnd() == BINGO_RES_UNFINISHED)
	{
		bingo_print();
		printf("No. of completed line : %i\n",bingo_countCompletedLine());
		
		int selNum =get_number();
		
		bingo_inputNum(selNum);
	}
	
	
	  
	
	
	
	
	
	
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("#############################################################\n");	
	printf("=============================================================\n");
	printf("^&**&#(**!*&%@#^&*@(*&$)) CONGRATULATION $%^&*(&^%^&^%$$%^&*)\n");
	printf("                          BINGO!!!!!!!!!!                    \n");
	printf("                          BINGO!!!!!!!!!!                    \n");	
	printf("                          BINGO!!!!!!!!!!                    \n");
	printf("                          BINGO!!!!!!!!!!                    \n");		
	printf("=============================================================\n");
	printf("#############################################################\n");		
	return 0;
	
	
}
