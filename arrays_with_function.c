#include <stdio.h>
void printarray(int *ptr, int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("So the %d value you gave is %d\n",a+1,*ptr);
        ptr++;
    }
}

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Give an integer value\n");
        scanf("%d", &array[i]);
    }
    printarray(array, 5);
}