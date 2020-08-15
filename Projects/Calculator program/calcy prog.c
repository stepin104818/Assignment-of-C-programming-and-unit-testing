#include<stdio.h>

int add( int a, int b)
    {
      return a+b;
    }

int sub( int x, int y)
    {
    return x-y;
    }

int (*fadd)(int, int);
int (*fsub)(int, int);

int main()
{

fadd=add;
fsub=sub;

//Input values are 10 and 20
int num1=10, num2=20;
int add_res, sub_res;

add_res= fadd(num1,num2);
sub_res= fsub(num1,num2);

printf("Result of addition= %d \n", add_res);
printf("Result of subtraction= %d \n", sub_res);


return 1;
}
