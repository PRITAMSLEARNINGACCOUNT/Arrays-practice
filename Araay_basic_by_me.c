#include<stdio.h>
int main(){
    int subjects[5]={1,2,3,4,5};
    float percentile_in_every_subjects[5];
    for (int i = 0; i < 5; i++)
    {
        printf("So Give The Marks in %d Subject\n",subjects[i]);
        scanf("%f",&percentile_in_every_subjects[i]);
    }
    for (int j = 0; j < 5; j++)
    {
       printf("So the percentile in %d subject is %f\n",subjects[j],percentile_in_every_subjects[j]);
    }
    return 0;
    
    
}