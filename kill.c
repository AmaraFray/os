#include <stdio.h>
#include <signal.h>

int main(void) {
    pid_t pid;

    printf("Enter the process ID (PID) of the program to terminate: ");
    if (scanf("%d", &pid) != 1) {
        fprintf(stderr, "Error: Invalid input.\n");
        return 1; // Exit with error code
    }

    if (kill(pid, SIGINT) == -1) { // Send SIGINT signal
        perror("kill");
        return 1; // Exit with error code
    }

    printf("Signal sent to process %d.\n", pid);
    return 0;
}
