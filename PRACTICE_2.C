#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = 5 * i;
    }
    for (int a = 1; a <= 10; a++)
    {
       printf("So the multiplication table of 5 is 5*%d=%d\n",a,array[a]);
    }
    return 0;
}