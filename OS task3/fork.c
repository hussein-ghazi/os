#include <stdio.h>
#include <unistd.h>
int main(int argc , char * argv[])
{
 int a =10;
 int b=5;
 int PID = fork();

if(PID==0)
{
  printf("adding from child: %d\n",a+b);
  PID =fork();
  if(PID != 0)
	{
	   printf("adding from grandchild: %d\n",a+b);
	}
}
else
{
  printf("adding from mother process: %d\n",a+b);
}
return 0;
}
