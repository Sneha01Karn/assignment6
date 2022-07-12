#include<stdio.h>
#include<conio.h>
int main()
{
    int n,middle_digit;
    printf("Enter a three digit number:");
    scanf("%d",&n);
    n=n/10;
    middle_digit=n%10;
    printf("Middle digit is %d",middle_digit);
    getch();
}
