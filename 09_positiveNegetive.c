//Programm name: write a C program to find out the number is positive or negative.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("%d is a positive number\n", num);
    }
    else if(num<0){
        printf("%d is a negetive number\n",num);
    }
    else{
        printf("%d is zero\n",num);
    }
    return 0;
}
