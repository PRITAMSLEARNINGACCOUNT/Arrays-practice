#include <stdio.h>

int main()
{
    int marks[20];

    int *ptr;
    //ptr = &marks[0];
    ptr = marks;
    for (int i = 0; i < 20; i++)
    {

        printf("Enter an integer value\n");
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("The integer you given is %d \n", marks[i]);
    }
    return 0;
}