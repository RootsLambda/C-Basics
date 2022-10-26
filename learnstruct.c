// File learnstruct.c
// Learn structured data

/*-----------Syntax--------------*/
// struct <name_struct> {
//        data_type <variable 1 or array 1>;
//        data_type <variable 2 or array 2>
//        ......
// }

/*-------------Note------------*/
// 1. Need to declare structure variable in function main
// 2. The dot means access to the element of that structure
// 3. Covert string and array by function strcpy()

#include<stdio.h>
#include<string.h>

 struct employee{
        int id;
        char name[50];
        float salary;
    };

 int main(){
    struct employee e;

    e.id=17;
    strcpy(e.name,"Lambda");
    e.salary= 200;

    printf("ID: %d\n",e.id);
    printf("Name: %s\n",e.name);
    printf("Salary: %f",e.salary);

}