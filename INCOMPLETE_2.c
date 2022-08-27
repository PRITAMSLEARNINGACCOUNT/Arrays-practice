#include <stdio.h>
#include <string.h>
int main()
{
    int subjects[6];
    char subject_name[7];
    char subject_name_two[7];
    char subject_name_three[9];
    // char subject_name_four[9];
    // char subject_name_five[11];
    // char subject_name_six[8];
    int L, H, n, n2;
    char *ptr, *ptr2;

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
    // printf("So Give The Name of subject\n");
    // for (int f = 0; f < 9; f++)
    // {
    //     scanf("%s", &subject_name_four[f]);
    // }
    // printf("Give the number of the subject\n");
    // scanf("%d", &subjects[3]);
    // printf("So my marks in ");
    // for (int p = 0; p < 9; p++)
    // {
    //     printf("%c", subject_name_four[p]);
    // }
    // printf(" is %d\n", subjects[3]); // FOUR
    // printf("So Give The Name of subject\n");
    // for (int r = 0; r < 11; r++)
    // {
    //     scanf("%s", &subject_name_five[r]);
    // }
    // printf("Give the number of the subject\n");
    // scanf("%d", &subjects[4]);
    // printf("So my marks in ");
    // for (int y = 0; y < 11; y++)
    // {
    //     printf("%c", subject_name_five[y]);
    // }
    // printf(" is %d\n", subjects[4]); // FIVE
    // printf("So Give The Name of subject\n");
    // for (int t = 0; t < 8; t++)
    // {
    //     scanf("%s", &subject_name_six[t]);
    // }
    // printf("Give the number of the subject\n");
    // scanf("%d", &subjects[5]);
    // printf("So my marks in ");
    // for (int q = 0; q < 8; q++)
    // {
    //     printf("%c", subject_name_six[q]);
    // }
    printf(" is %d\n", subjects[5]);
    if (subjects[0] > subjects[1])
    {
        L = subjects[1];
        H = subjects[0];
        ptr = &subject_name_two[0];
        n = strlen(subject_name_two);
        ptr2 = &subject_name[0];
        n2 = strlen(subject_name);
    }
    if (subjects[0] < subjects[1])
    {
        L = subjects[0];
        H = subjects[1];
        ptr = &subject_name[0];
        n = strlen(subject_name);
        ptr2 = &subject_name_two[0];
        n = strlen(subject_name_two);
    }
    if (L > subjects[2])
    {
        L = subjects[2];
        ptr = &subject_name_three[0];
        n = strlen(subject_name_three);
    }
    if (H < subjects[2])
    {
        H = subjects[2];
        ptr2 = &subject_name_three[0];
        n2 = strlen(subject_name_three);
    }
    // if (L > subjects[3])
    // {
    //     L = subjects[3];
    //     ptr = subject_name_four;
    //     n = strlen(subject_name_four);
    // }
    // if (H < subjects[3])
    // {
    //     H = subjects[3];
    //     ptr2 = subject_name_four;
    //     n2 = strlen(subject_name_four);
    // }
    // if (L > subjects[4])
    // {
    //     L = subjects[4];
    //     ptr = subject_name_five;
    //     n = strlen(subject_name_five);
    // }
    // if (H < subjects[4])
    // {
    //     H = subjects[4];
    //     ptr2 = subject_name_five;
    //     n2 = strlen(subject_name_five);
    // }
    // if (L > subjects[5])
    // {
    //     L = subjects[5];
    //     ptr = subject_name_six;
    //     n = strlen(subject_name_six);
    // }
    // if (H < subjects[5])
    // {
    //     H = subjects[5];
    //     ptr2 = subject_name_six;
    //     n2 = strlen(subject_name_six);
    // }

    printf("So the Lowest marks in ");

    for (int pri = 0; pri <= n; pri++)
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf(" is %d and The highest marks in ", L);
    for (int pritamstech = 0; pritamstech <= n2; pritamstech++)
    {
        printf("%c", *ptr2);
        ptr2++;
    }
    printf(" is %d\n", H);

    return 0;
}
