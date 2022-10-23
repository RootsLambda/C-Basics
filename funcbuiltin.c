// File funcbuiltin.c
// Introduction to the fucntions libraby standart <math.h>

/*-----------Syntax--------------*/
// 1. double sqrt(double x)
// 2. int abs(int x)
// 3. double pow(double x, double y)
// 4. double log(double x)
// 5. double exp(double x)
// 6. double sin(double x)
// 7. double cos(double x)
// 8. double tan(double x)

#include<stdio.h>
#include<math.h>

int main(){
    float a = 3;
    int b =-4;
    printf("Root square of a: %f\n", sqrt(a)); 
    printf("The absoluate of a: %d\n", abs(b));


    printf("The power three of a: %f\n", pow(a,3));
    printf("The logarit e of a: %f\n", log(a));
    printf("The expotinal of a: %f\n", exp(a));

    
    printf("The sin of a: %f\n", sin(b));
    printf("The cos of a: %f\n", cos(b));
    printf("The tan of a: %f\n", tan(b));
 return 0;
}