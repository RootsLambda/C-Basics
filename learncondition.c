// File learnconditon.c
// Conditional branch statement

/*-----------Syntax--------------*/
// 1. if <condition>
//    {block statement}

// 2. if <condition>  
//    {block statement 1}
//   else {block statement 2}

// 3. if <condition 1>
//    {block statement 1}
//   else if <condition 2>
//    {block statement 2}
//   ...
//   else {block statement n}

#include <stdio.h>

int main()
{
    // Condition if
    int max, a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    max = a;
    if (a<b) {

        max=b;
    }
    printf("Max a and b: %d\n",max);

    // Condition if-else
    if (a>b){
        max = a;
    }
    else{
        max = b;
    }
    
    // Conditon if-else if-else
    int k = -1;
    if  (k == 6)
        printf("%d is a number equal to 6",k);
    else if (k >6)
        printf("%d is a number greater than 6",k);
    else if (0<k<6)
        printf("%d is a number less than 6",k);
    else
        printf("%d is a number nagetive",k);

    return 0;
}