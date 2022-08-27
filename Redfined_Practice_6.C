#include <stdio.h>

int main()
{
    int array[10];
    int negativenumber;
    negativenumber = 0;
    int positivenumber;
    positivenumber = 0;
    for (int a = 0; a < 10; a++)
    {
        printf("Give an integer value\n");
        scanf("%d", &array[a]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] < 0)
        {

            negativenumber++;
        }
        else
        {
            positivenumber++;
        }
    }
    printf("So there are %d positive numbers which are ", positivenumber);
    for (int aii = 0; aii < 10; aii++)
    {
        if (array[aii] > 0)
        {
            printf("%d ", array[aii]);
        }
    }
    printf("And there are %d negative numbers which are ", negativenumber);
    for (int ai = 0; ai < 10; ai++)
    {
        if (array[ai] < 0)
        {
            printf("%d ", array[ai]);
        }
    }
    return 0;
}