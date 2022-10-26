// File learnfunc.c
// Show us function basics

/*-----------Syntax--------------*/
// Return_type <name funcion>(type variable1, type variable2, .....){
// <Statement>
// return value 
// }
// If return type 'void' will no return value

#include<stdio.h>

int add(int x,int y){
    return x+y;

}

void subtract(int a, int b){
    int c;
    c=a-b;
    printf("Value c is: %d",c);
}

int main(){
    printf("Result add: %d\n",add(3,4));
    subtract(4,5);
    return 0;
}