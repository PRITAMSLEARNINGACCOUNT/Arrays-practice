#include <stdio.h>
void display(int *ptr,int num)
{
    for (int i = 0; i < 10; i++)
    {
        ptr[i]=num*(i+1);
    }
    for (int a = 0; a < 10; a++)
    {
        printf("%d * %d = %d\n",num,a+1,ptr[a]);
    }
    printf("\n");
}
int main()
{
    int array[3][10];
    display(array[0],2);
    display(array[1],7);
    display(array[2],9);

    return 0;
}