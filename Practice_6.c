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
    printf("So there are %d positive numbers and %d negative numbers\n", positivenumber, negativenumber);
}