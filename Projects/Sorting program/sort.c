#include<stdio.h>
#include<stdlib.h>

void sort_function(int num, int *a)
   {
   int i,j,t;

   for(i=0; i<num; i++)
     {
        for(j=0; j<num-1; j++)
        {
            if( *(a+j) > *(a+j+1) )
            {
                t= *(a+j);
                *(a+j)= *(a+j+1);
                *(a+j+1)= t;
            }
        }
     }
   }


int main()
{
int *arr;
int i, num;
arr=(int*)malloc(50);
printf("Enter the number of elements \n");
scanf("%d",&num);

printf("Enter the elements \n");
for(i=0; i<num; i++)
   scanf("%d", &arr[i]);

sort_function(num, arr);

printf("sorted array in ascending order: \n");

for(i=0; i<5; i++)
     printf("%d \n", arr[i]);
}

