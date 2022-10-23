// File operator.c
// Introduction to common operators in C

/*-------------Note------------*/
// 1. Variables need to be declared first
// 2. Format integers we use the character %d
// 3. Format float we use the character %d

# include<stdio.h>

int main()
{  // 1.Arithmetic expression
   int a=4, b=5;
   printf("Add: %d\n",a+b);
   printf("Subtract: %d\n",a-b);
   printf("Mutily: %d\n",a*b);
   printf("Divide: %d\n",a/b);

   // 2.Comparison expression
   float c = 4.5, d = 3.4;
   printf("Operator '>' is greater: %d\n",c>d);
   printf("Operator '<' is less: %d\n",c<d);
   printf("Operator '==' is equality: %d\n",c==d);
   printf("Operator '!=' is not equality: %d\n",c!=d);

   // 3.Logical operator
   double e = 45.4, f = 3.2;
   printf("NOT is '!': %d\n",!e);
   printf("AND is '&&': %d\n",e&&f);
   printf("OR is '||': %d\n",e||f);

   // 4. Complex expression
   int r = 3;
   float area = 3.14*r*r;
   printf("Area is cricle: %f\n", area);
   return 0;
}