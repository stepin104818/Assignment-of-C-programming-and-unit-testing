#include<stdio.h>

/**
* This is just for testing.
* @prime prog.c
* @param[in] num this is the input number v should give
* @param[out] flag if flag is set to '1', then the number is prime

*/


int check_prime(int);

/**
 * Main entry point of the program.
*/


int main()
{
int num, flag;
printf("Enter a number: \n");
scanf("%d", &num);
flag=check_prime(num);

if(flag==1)
    printf("True, entered number is a prime number \n");
else
    printf("False, entered number is not a prime number \n");

return 0;

}

int check_prime( int num){
 int i;

 // Zero and One are not considered to be prime numbers
if(num==0 || num==1)
    return 0;

else{
    for(i=2;i<num;i++)
        {
    if(num%i==0)
        return 0;

     else
        return 1;
        }

    }
}
