// File learnwhile.c
// Introduce while loop and do while

/*-----------Syntax--------------*/
// 1. while (expression)
//  {
//   <statement>
//  }

// 2. do
// {
//   <statement 1>    
// }
// while (expression);

#include<stdio.h>

int main(){
   int x = 5;
   while (x<25)
    {
        x=2*x - 1;
    }
    printf("%d\n",x);


    int k =1,sum=0;
    do{
        sum+=k;
        k++;

    } while (k<10);

    printf("%d",sum);
    return 0;
}