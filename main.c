#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int x;
	int i;
	
	printf("input a number : ");
	scanf("%d", &x);
	
	// for ���� Ȱ���Ͽ� 1���� x���� sum�� ���ϴ� �ڵ�
	
	for (i=0; i<=x; i++) // �ݺ�(�ʱ��;���ǽ�;������) 
		sum = sum + i; // ���ϱ� 
	
	printf("the result is %d\n", sum); // ��� ���
		
	return 0;
}
