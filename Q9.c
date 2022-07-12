#include<stdio.h>
#include<conio.h>
int main()
{
    float x,USD;
    printf("Enter INR amount:");
    scanf("%f",&x);
    USD=x/76.23;
    printf("equivalent USD is %f",USD);
    getch();
}
