#include <stdio.h>
#include <string.h>
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
    int lowest, n;
    char *ptr;
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

        lowest = marks[0];
        ptr = Bengali;

        n = strlen(Bengali);
    }
    if (marks[0] > marks[1])
    {

        lowest = marks[1];
        ptr = English;

        n = strlen(English);
    }
    if (lowest > marks[2])
    {
        lowest = marks[2];
        ptr = Mathematics;
        n = strlen(Mathematics);
    }
    if (lowest > marks[3])
    {
        lowest = marks[3];
        ptr = History;
        n = strlen(History);
    }
    if (lowest > marks[4])
    {
        lowest = marks[4];
        ptr = Geography;
        n = strlen(Geography);
    }
    if (lowest > marks[5])
    {
        lowest = marks[5];
        ptr = political_science;
        n = strlen(political_science);
    }
    if (lowest > marks[6])
    {
        lowest = marks[6];
        ptr = Sociology;
        n = strlen(Sociology);
    }
    if (lowest > marks[7])
    {
        lowest = marks[7];
        ptr = Psychology;
        n = strlen(Psychology);
    }

    if (lowest > marks[8])
    {
        lowest = marks[8];
        ptr = Philosophy;
        n = strlen(Philosophy);
    }

    printf("The lowest marks in ");
    for (int a = 0; a < n; a++)
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf(" is %d\n", lowest);

    return 0;
}