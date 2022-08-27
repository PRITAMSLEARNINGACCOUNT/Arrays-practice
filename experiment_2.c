#include <stdio.h>
#include <string.h>
int main()
{
    char abc[6];
    int n;
    char *ptr;
    for (int i = 0; i < 6; i++)
    {
        printf("Give a charecter\n");
        scanf("%c", &abc);
    }
    n = strlen(abc);
    ptr = abc;
    printf("So the charecter given by you is %c\n",abc);
    // for (int a = 0; a < n; a++)
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    return 0;
}