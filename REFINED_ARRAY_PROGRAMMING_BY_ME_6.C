#include <stdio.h>
int main()
{
    char Bengali[10];
    char English[10];
    char Mathematics[10];
    char History[10];
    char Geography[10];
    char political_science[20];
    char Sociology[10];
    char Psychology[20];
    char Philosophy[20];
    int marks[10];
    int highest;
    printf("Give the Name of the Subject\n");
    scanf("%s", &Bengali);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[0]);
    printf("So the marks of %s subject is %d\n", Bengali, marks[0]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &English);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[1]);
    printf("So the marks of %s subject is %d\n", English, marks[1]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &Mathematics);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[2]);
    printf("So the marks of %s subject is %d\n", Mathematics, marks[2]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &History);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[3]);
    printf("So the marks of %s subject is %d\n", History, marks[3]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &Geography);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[4]);
    printf("So the marks of %s subject is %d\n", Geography, marks[4]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &political_science);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[5]);
    printf("So the marks of %s subject is %d\n", political_science, marks[5]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &Sociology);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[6]);
    printf("So the marks of %s subject is %d\n", Sociology, marks[6]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &Psychology);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[7]);
    printf("So the marks of %s subject is %d\n", Psychology, marks[7]);
    printf("Give the Name of the Subject\n");
    scanf("%s", &Philosophy);
    printf("Give the marks of the subject you entered\n");
    scanf("%d", &marks[8]);
    printf("So the marks of %s subject is %d\n", Philosophy, marks[8]);
    if (marks[0] < marks[1])
    {
        highest = marks[1];
    }
    else
    {
        highest = marks[0];
    }
    for (int i = 2; i <= 8; i++)
    {
        if (highest < marks[i])
        {
            highest = marks[i];
        }
    }
    printf("So the greatest marks is %d\n", highest);

    return 0;
}