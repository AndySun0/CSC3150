#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
// char *childsignal[] = {NULL,
// 					   "SIGHUP", "SIGINT", "SIGQUIT", "SIGILL", "SIGTRAP",
// 					   "SIGABRT", "SIGBUS", "SIGFPE", "SIGKILL", "SIGUSR1",
// 					   "SIGSEGV", "SIGUSR2", "SIGPIPE", "SIGALRM", "SIGTERM"};

int main(int argc,char* argv[]){
	printf("------------CHILD PROCESS START------------\n");
	printf("This is the SIGTERM program\n\n");
	raise(SIGSTOP);

	sleep(5);
	// printf("------------CHILD PROCESS END------------\n");

	return 0;
}
