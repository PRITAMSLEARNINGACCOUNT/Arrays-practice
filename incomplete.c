#include <stdio.h>
#include<string.h>
int main()
{
    char marks[4];

    char *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {

        printf("Enter a float value\n");
        scanf("%s", ptr);
        ptr++;
        strcpy(marks,ptr);
    }

    printf("The float given by you is %c \n", marks);

    return 0;
}