#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("a=%d\nb=%d",a,b);
    getch();
}
