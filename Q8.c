#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a digit:");
    scanf("%d",&y);
    z=x*10+y;
    printf("Appended number is %d",z);
    getch();
}
