#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

  char str[]="my_name_is_edcast_future_skills";
  char* token=strtok(str, "_");

  while(token!=NULL)
    {
      printf("%s \n", token);
      token=strtok( NULL, "_");
    }


return 1;
}
