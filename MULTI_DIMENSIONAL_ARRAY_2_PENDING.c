#include <stdio.h>
int main()
{
    int subjects[5][2];
    // float percentile_in_every_subjects[5];
    int h, L, e;
    for (int i = 0; i < 5; i++)
    {
        printf("So Give The Number of subject\n");
        scanf("%d", &subjects[i][0]);
        printf("So Give The Marks in %d Subject\n", subjects[i][0]);
        scanf("%d", &subjects[i][1]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("So The Marks in %d Subject is %d\n", subjects[j][0], subjects[j][1]);
    }

        return 0;
}