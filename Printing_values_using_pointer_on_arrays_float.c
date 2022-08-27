#include <stdio.h>

int main()
{
    float marks[4];

    float *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {

        printf("Enter a float value\n");
        scanf("%f", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The float given by you is %f \n", marks[i]);
    }
    return 0;
}