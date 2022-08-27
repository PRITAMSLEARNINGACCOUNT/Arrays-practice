#include <stdio.h>
int main()
{
    int array[10];
    int X;
    printf("Give an integer value\n");
    scanf("%d",&X);
    for (int i = 0; i < 10; i++)
    {
        array[i] = X * i;
    }
    for (int a = 1; a <= 10; a++)
    {
       printf("So the multiplication table of 5 is %d * %d = %d\n",X,a,array[a]);
    }
    return 0;
}