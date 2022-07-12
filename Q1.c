#include<stdio.h>
#include<conio.h>
int main()
{
    int integer_type;
    float float_type;
    double double_type;
    char char_type;

    printf("size of int:%d bytes\n",sizeof(integer_type));
    printf("size of float:%d bytes\n",sizeof(float_type));
    printf("size of double:%d bytes\n",sizeof(double_type));
    printf("size of char:%d bytes\n",sizeof(char_type));
    getch();
}
