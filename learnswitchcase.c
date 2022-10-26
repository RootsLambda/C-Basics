// File learnswitchcase.c
// No Conditional branch statement

/*-----------Syntax--------------*/
// switch <expression>{
// case value 1: block 1;
// case value 2: block 2;
// ....
// default:
//     block 0;
// }

#include<stdio.h>

int main(){

    int n = 40;
    switch (n)
    {
        case 0: printf('Hello');break;
        case 20: printf("World");break;
        case 40: printf("Lambda");break;
        default:
            printf("Roots");
    }
    return 0;
}