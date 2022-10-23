// File learnfor.c
// Structure Loop

/*-----------Syntax--------------*/
// for(start_variable_loop,end_variable_loop,increment)
// {
//    <statement>;
// }

#include<stdio.h>

int main(){

    int sum =0;
    for (int k=1; k<10;k++)
        sum =sum + k;
    printf("%d",sum);
    return 0;
}