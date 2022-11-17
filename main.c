#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	bingo_print();
	bingo_inputNum(5);
	bingo_print();
	bingo_inputNum(12);
	  
	
	
	
	
	
	
	
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
