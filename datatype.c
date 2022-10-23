// File datatype.c
// Show some data types 

/*-------------Note------------*/
// 1. Use define constant
// 2. Number interger
// 3. Number float
// 4. Number float double precision
// 5. Number long interger
// 6. Number short interger
// 7. Character type
#include<stdio.h>
int main(){
    #define pi 3.1459
    int a = 4;
    float b = 2.3;
    double c = 3.43444;
    long d =  -2.34292939;
    short e = 43;
    char vary = 65; 
   
   // Size of datatype in C
    printf("Storage size for int : %d byte\n",sizeof(int));
    printf("Storage size for float : %d byte\n",sizeof(float));
    printf("Storage size for double : %d byte\n",sizeof(double));
    printf("Storage size for char : %d byte\n",sizeof(long));
    printf("Storage size for short : %d byte\n",sizeof(short));
    printf("Storage size for char : %d byte\n",sizeof(char));
    return 0;
}