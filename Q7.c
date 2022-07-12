#include<stdio.h>
#include<conio.h>
long int main()
{
    long int a;
    printf("Enter a number:");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("The answer is %d",a);
    getch();
}
