#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    printf("Enter the number c:");
    scanf("%d",&c);
    d=(a>b)?a*c:b*c;
    printf("product = %d",d);
}

