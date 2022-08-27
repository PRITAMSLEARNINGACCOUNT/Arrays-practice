#include <stdio.h>
int main()
{
    int array[10];
    int *ptr = array;
    for (int i = 0; i < 10; i++)
    {

        printf("Give an integer\n");
        scanf("%d", &array[i]);
    }
    printf("So the third element given by user is %d\n",*(ptr+2));
    return 0;
}
