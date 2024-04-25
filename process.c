#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	pid_t p = fork();
	if(p<0){
		exit(1);
	}
	return 0;
}
