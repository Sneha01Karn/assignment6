#include<stdio.h>
#include<conio.h>
int main()
{
    int n,first_digit;
    printf("Enter a three digit number:");
    scanf("%d",&n);
    first_digit=n/100;
    printf("First digit is %d",first_digit);
    getch();
}
