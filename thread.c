#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

void *myFun(void *vargp) 
{ 
	sleep(1); 
	return NULL; 
} 

int main() 
{ 
	pthread_t thread_id; 
	pthread_create(&thread_id, NULL, myFun, NULL); 
	pthread_join(thread_id, NULL); 
	exit(0); 
}
