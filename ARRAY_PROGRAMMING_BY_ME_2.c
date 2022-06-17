#include <stdio.h>
int main()
{
    char subjects_name[51];
    int subjects_marks[6];
    int h, l;
    printf("So Give The Name of subject\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%s", &subjects_name[i]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[0]);
    printf("So my marks in ");
    for (int z = 0; z < 7; z++)
    {
        printf("%c", subjects_name[z]);
    }
    printf(" is %d\n", subjects_marks[0]); // FIRST

    printf("So Give The Name of subject\n");
    for (int j = 7; j < 14; j++)
    {
        scanf("%s", &subjects_name[j]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[1]);
    printf("So my marks in ");
    for (int o = 7; o < 14; o++)
    {
        printf("%c", subjects_name[o]);
    }
    printf(" is %d\n", subjects_marks[1]); // SECOND

    printf("So Give The Name of subject\n");
    for (int e = 14; e < 23; e++)
    {
        scanf("%s", &subjects_name[e]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[2]);
    printf("So my marks in ");
    for (int u = 14; u < 23; u++)
    {
        printf("%c", subjects_name[u]);
    }
    printf(" is %d\n", subjects_marks[2]); // THIRD

    printf("So Give The Name of subject\n");
    for (int f = 23; f < 32; f++)
    {
        scanf("%s", &subjects_name[f]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[3]);
    printf("So my marks in ");
    for (int p = 23; p < 32; p++)
    {
        printf("%c", subjects_name[p]);
    }
    printf(" is %d\n", subjects_marks[3]); // FOUR

    printf("So Give The Name of subject\n");
    for (int r = 32; r < 43; r++)
    {
        scanf("%s", &subjects_name[r]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[4]);
    printf("So my marks in ");
    for (int y = 32; y < 43; y++)
    {
        printf("%c", subjects_name[y]);
    }
    printf(" is %d\n", subjects_marks[4]); // FIVE
    printf("So Give The Name of subject\n");
    for (int t = 43; t < 51; t++)
    {
        scanf("%s", &subjects_name[t]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects_marks[5]);
    printf("So my marks in ");
    for (int q = 43; q < 51; q++)
    {
        printf("%c", subjects_name[q]);
    }
    printf(" is %d\n", subjects_marks[5]);

    printf("So my marks in ");
    for (int nope = 0; nope < 7; nope++)
    {
        printf("%c", subjects_name[nope]);
    }
    printf(",");
    for (int npq = 7; npq < 14; npq++)
    {
        printf("%c", subjects_name[npq]);
    }
    printf(",");
    for (int neww = 14; neww < 23; neww++)
    {
        printf("%c", subjects_name[neww]);
    }
    printf(",");
    for (int nw = 23; nw < 32; nw++)
    {
        printf("%c", subjects_name[nw]);
    }
    printf(",");
    for (int name = 32; name < 43; name++)
    {
        printf("%c", subjects_name[name]);
    }
    printf(",");
    for (int nap = 43; nap < 51; nap++)
    {
        printf("%c", subjects_name[nap]);
    }
    printf(" these subjects are %d,%d,%d,%d,%d,%d\n", subjects_marks[0], subjects_marks[1], subjects_marks[2], subjects_marks[3], subjects_marks[4], subjects_marks[5]);
    if (subjects_marks[0] < subjects_marks[1])
    {
        h = subjects_marks[1];
        l = subjects_marks[0];
    }
    else if (subjects_marks[0] > subjects_marks[1])
    {
        h = subjects_marks[0];
        l = subjects_marks[1];
    }
    for (int round = 2; round < 6; round++)
    {
        if (h < subjects_marks[round])
        {
            h = subjects_marks[round];
        }
        else if (l > subjects_marks[round])
        {
            l = subjects_marks[round];
        }
    }
    printf("So the greatest marks is %d\n", h);
    printf("So the Lowest marks is %d\n", l);

    return 0;
}