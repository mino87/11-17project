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
	
	//���� 
	//������ �����
	/* 
	//
	//�ݺ����̿� 
	/*while(���Ǽ�<2)
	{	
	    ������ ��� ���
	    �ϼ��� �ټ� ���
	    ���� �Է¹ޱ� ���
	    ������� ������Ʈ  	
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
