#include<stdio.h>
void main()
{
	double a,b,x;
	int Operation;
	printf("1=addition,2=subtraction,3=multiplication,4=division\n");
	printf("Enter the Operation to be perform:");
	scanf("%d",&Operation);
	printf("Enter the number a:");
	scanf("%lf",&a);
	printf("Enter the number b:");
	scanf("%lf",&b);
	switch(Operation)
	{
		case 1:
			x=a+b;
			printf("%lf is addition of numbers",x);
			break;
			case 2:
			x=a-b;
			printf("%lf is subtraction of numbers",x);
			break;
			case 3:
			x=a*b;
			printf("%lf is multiplication of numbers",x);
			break;
			case 4:
			x=a/b;
			printf("%lf is division of numbers",x);
			break;
			default:
			printf("INVALID INPUT");
			break;
			
	}
}
