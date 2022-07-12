#include<stdio.h>
#include<conio.h>
int main()
{
    int n, last_digit;
    printf("Enter any number:");
    scanf("%d",&n);
    last_digit=n%10;
    printf("Last Digit=%d",last_digit);
    getch();
}
