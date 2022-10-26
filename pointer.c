// File pointer.c
// Explanation of pointers in C

/*-----------Syntax--------------*/
// data_type *name_pointer;

/*-------------Note------------*/
// 1. Characters '&' locate of the memory location of the variable
// 2. Use '&' print this adrress variable 
// 3. Pointers are also variables and have addresses
// 4. The value of the pointer is the address it is point
// 5. The address of the pointer is where it was when it was created

# include<stdio.h>

int main(){
    int a = 5;
    printf("Value of a: %d\n",a);
    
    printf("Address of a: %d\n",&a);
    int *p;
    int b = 3;
    int c=0;
    p = &c;
    p = b;
    printf("%d",c); 
    return 0; 
}