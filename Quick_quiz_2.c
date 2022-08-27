#include <stdio.h>
void display(int *ptr)
{
    int a = 1;
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            //a++;
            for (int ai = 0; ai < 3; ai++)
            {
                printf("So the values given by you for %d is %d\n", a+1, *ptr);
                ptr++;
            }
            
            
        }
        else
        {
            printf("So the values given by you for %d is %d\n", a, *ptr);
        }

        ptr++;
    }
}
int main()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            printf("Give an integer value for %d\n", i + 1);
            scanf("%d", &array[i][a]);
        }
    }
    display(array);

    return 0;
}