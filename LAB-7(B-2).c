#include<stdio.h>
void main ()
{
	char x,y;
	printf("ENTER THE CHARACTER:");
	scanf("%c",&x);
	y=(x>='A'&& x<='Z'||x>='a'&& x<='z')?printf("You have entered CHARACTER"):printf("You did not enter CHARACTER");
}
