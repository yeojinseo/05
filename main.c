#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	
	if (x < 0)
		x = -1*x;
	
	printf("���밪�� %d �Դϴ�.\n", x);
		
	return 0;
}
