#include <stdio.h>
int main()
{
    int subjects[5] = {1, 2, 3, 4, 5};
    float percentile_in_every_subjects[5];
    float h, L;
    for (int i = 0; i < 5; i++)
    {
        printf("So Give The Marks in %d Subject\n", subjects[i]);
        scanf("%f", &percentile_in_every_subjects[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("So the percentile in %d subject is %f\n", subjects[j], percentile_in_every_subjects[j]);
    }
    if (percentile_in_every_subjects[0] < percentile_in_every_subjects[1])
    {
        h = percentile_in_every_subjects[1];
        L = percentile_in_every_subjects[0];
    }
    else
    {
        h = percentile_in_every_subjects[0];
        L = percentile_in_every_subjects[1];
    }
    for (int f = 2; f < 5; f++)
    {
        if (h < percentile_in_every_subjects[f])
        {
            h = percentile_in_every_subjects[f];
        }
        else if (L > percentile_in_every_subjects[f])
        {
            L = percentile_in_every_subjects[f];
        }
    }
    printf("So the Greatest percentile is %f\n", h);
    printf("So the  Lowest percentile is %f\n", L);

    return 0;
}