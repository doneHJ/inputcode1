#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int input;
	

	while(1)
	{
		
		printf("숫자를 입력 해 주세요:");
		scanf("%d", &input);
		

		if (input < 1000)
		{
			printf("숫자를 입력 해 주세요:");
			scanf("%d", &input);
		}
		if (input > 1000)
		{
			printf("1000을 초과하셨습니다.\n");
		}
		if (input == 1000)
		{
			break;
		}
	}
}