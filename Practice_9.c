#include<stdio.h>
int main(){
    int array[3][3][3];
    for (int i = 0; i < 3; i++)
    {
       for (int a = 0; a < 3; a++)
       {
        for (int ai = 0; ai < 3; ai++)
        {
            printf("The adress of three dimensional array %d %d %d is %u\n",i,a,ai,&array[i][a][ai]);
        }
        
       }
       
    
      
    }
    return 0;
}