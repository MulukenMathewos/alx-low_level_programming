#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: sum of all the multiples 
 */
int main()
{
    long unsigned int i,sum=0;
    clrscr();
    for(i=0;i<=1024;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    getchar();
    return 0;
}
