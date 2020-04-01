#include<stdio.h>
#include<unistd.h>
int main()
{
   char *path="./fork";
   int r=execv(path,NULL);
   if(r==-1)
	printf("No such file\n");

}
