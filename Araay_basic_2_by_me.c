#include<stdio.h>
int main(){
    int subjects[5]={1,2,3,4,5};
    float percentile_in_every_subjects[5];
    float h;
    for (int i = 0; i < 5; i++)
    {
        printf("So Give The Marks in %d Subject\n",subjects[i]);
        scanf("%f",&percentile_in_every_subjects[i]);
    }
     if (percentile_in_every_subjects[0]<percentile_in_every_subjects[1])
    {
       h=percentile_in_every_subjects[1];
    }
    for (int j = 0; j < 5; j++)
    {
       printf("So the percentile in %d subject is %f\n",subjects[j],percentile_in_every_subjects[j]);
    }
     for ( int e = 2; e < 5; e++)
    {
        if (h<percentile_in_every_subjects[e])
    {
         h=percentile_in_every_subjects[e];
    }
    
    }
    printf("So the Greatest percentile is %f\n",h);
    return 0;
    
    
}