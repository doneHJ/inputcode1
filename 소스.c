#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int input;
	

	while(1)
	{
		
		printf("���ڸ� �Է� �� �ּ���:");
		scanf("%d", &input);
		

		if (input < 1000)
		{
			printf("���ڸ� �Է� �� �ּ���:");
			scanf("%d", &input);
		}
		if (input > 1000)
		{
			printf("1000�� �ʰ��ϼ̽��ϴ�.\n");
		}
		if (input == 1000)
		{
			break;
		}
	}
}