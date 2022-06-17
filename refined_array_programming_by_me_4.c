#include <stdio.h>
int main()
{
    int subjects[6];
    char subject_name[7];
    char subject_name_two[7];
    char subject_name_three[9];
    char subject_name_four[9];
    char subject_name_five[11];
    char subject_name_six[8];
    int L;

    printf("So Give The Name of subject\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%s", &subject_name[i]);
    }

    printf("Give the number of the subject\n");
    scanf("%d", &subjects[0]);
    printf("So my marks in ");
    for (int z = 0; z < 7; z++)
    {
        printf("%c", subject_name[z]);
    }
    printf(" is %d\n", subjects[0]); // 1st

    printf("So Give The Name of subject\n");
    for (int j = 0; j < 7; j++)
    {
        scanf("%s", &subject_name_two[j]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects[1]);
    printf("So my marks in ");
    for (int o = 0; o < 7; o++)
    {
        printf("%c", subject_name_two[o]);
    }
    printf(" is %d\n", subjects[1]); // 2nd

    printf("So Give The Name of subject\n");
    for (int e = 0; e < 9; e++)
    {
        scanf("%s", &subject_name_three[e]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects[2]);
    printf("So my marks in ");
    for (int u = 0; u < 9; u++)
    {
        printf("%c", subject_name_three[u]);
    }
    printf(" is %d\n", subjects[2]); // third
    printf("So Give The Name of subject\n");
    for (int f = 0; f < 9; f++)
    {
        scanf("%s", &subject_name_four[f]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects[3]);
    printf("So my marks in ");
    for (int p = 0; p < 9; p++)
    {
        printf("%c", subject_name_four[p]);
    }
    printf(" is %d\n", subjects[3]); // FOUR
    printf("So Give The Name of subject\n");
    for (int r = 0; r < 11; r++)
    {
        scanf("%s", &subject_name_five[r]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects[4]);
    printf("So my marks in ");
    for (int y = 0; y < 11; y++)
    {
        printf("%c", subject_name_five[y]);
    }
    printf(" is %d\n", subjects[4]); // FIVE
    printf("So Give The Name of subject\n");
    for (int t = 0; t < 8; t++)
    {
        scanf("%s", &subject_name_six[t]);
    }
    printf("Give the number of the subject\n");
    scanf("%d", &subjects[5]);
    printf("So my marks in ");
    for (int q = 0; q < 8; q++)
    {
        printf("%c", subject_name_six[q]);
    }
    printf(" is %d\n", subjects[5]);
    if (subjects[0] > subjects[1])
    {
        L = subjects[1];
    }
    else
    {
        L = subjects[0];
    }

    for (int round = 2; round < 6; round++)
    {
        if (L > subjects[round])
        {
            L = subjects[round];
        }
    }
    printf("So the greatest marks is %d\n", L);
    return 0;
}
