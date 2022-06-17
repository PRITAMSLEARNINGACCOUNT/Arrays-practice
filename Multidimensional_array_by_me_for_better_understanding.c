#include <stdio.h>
int main()
{
    int a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a Value\n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("So the Value is %d\n", a[0][0]);
    printf("So the Value is %d\n", a[0][1]);
    printf("So the Value is %d\n", a[1][0]);
    printf("So the Value is %d\n", a[1][1]);
    return 0;
}