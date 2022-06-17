#include<stdio.h>//Finding Only The Greatest Number Among 10 Numbers
int main(){
    int Comparing_numbers[10];
    int h;
    for ( int i = 0; i < 10; i++)
    {
        printf("Give a Value to compare\n");
        scanf("%d",&Comparing_numbers[i]);
    }
    if (Comparing_numbers[0]<Comparing_numbers[1])
    {
       h=Comparing_numbers[1];
    }
    else
    {
        h=Comparing_numbers[0];
    }
    for ( int j = 2; j <= 9; j++)
    {
        if (h<Comparing_numbers[j])
    {
         h=Comparing_numbers[j];
    }
    
    }
    printf("So The Greatest number among the ten number is %d\n",h);
    return 0;
    
    
    
}