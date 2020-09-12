#include<stdio.h>
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	
	if (num >= 0) {
		num = num + 543;
		printf("%d", num);
	}
	else {
		while (num < 0) {
			printf("Please insert number that is greater or equal zero : ");
			scanf("%d", & num);
		}
		num = num + 543;
		printf("%d", num);
	}
}