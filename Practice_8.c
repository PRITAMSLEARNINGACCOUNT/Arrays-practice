#include <stdio.h>
void display(int *ptr, int num)
{
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = num * (i + 1);
    }
    for (int a = 0; a < 10; a++)
    {
        printf("%d * %d = %d\n", num, a + 1, ptr[a]);
    }
    printf("\n");
}
int main()
{
    int array[3][10];
    int m, n, i;
    printf("Give a number you want to get a multriplication Table\n");
    scanf("%d", &n);
    display(array[0], n);
    printf("Give a number you want to get a multriplication Table\n");
    scanf("%d", &m);
    display(array[1], m);
    printf("Give a number you want to get a multriplication Table\n");
    scanf("%d", &i);
    display(array[2], i);

    return 0;
}