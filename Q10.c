#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    x=y*100+x;
    printf("The answer is %d",x);
    getch();
}
