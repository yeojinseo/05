#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0; 
	
	do
	{
	printf("Guess a number : "); // �Է��ض� ���� ���
	scanf("%d", &x); // �Է��� ����
		
	if ( x>answer ) // �Է� ���ڰ� ���亸�� ū�� ������ ���
		printf("high!\n");
	else if ( x<answer ) 
		printf("low!\n");
	else
		printf("Congratulation!\n");
		
	trial = trial + 1;
	if ( x==answer )
		break;
	}
	while ( x!=answer ); // ����� ������ ���� �Ǵ� 
	
	printf("Number of trial = %i\n", trial); // �õ� Ƚ�� ���
	 
	return 0;
}
