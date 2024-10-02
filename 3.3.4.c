#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

// Function to display the flag message
void display_flag() {
    printf("HD{Linux ko'nikmalaringiz katta darajada oshmoqda!}\n");
}

int main() {
    pid_t pid;
    pid_t user_pid;

    // Fork the process to create the rising process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("Failed to fork the process");
        exit(1);
    } else if (pid == 0) {
        // Child process (acts as the background process)
        while (1) {
            sleep(1);
        }
    } else {
        // Parent process (main program)
        printf("Flagni olish uchun Rising prcoess ni PID ni kiriting.\n");

        // Prompt the user to input the PID they found
        printf("Rising process ni PID ni kiriting: ");
        scanf("%d", &user_pid);

        // Check if the entered PID matches the actual process PID
        if (user_pid == pid) {
            // If the entered PID is correct, display the flag
            display_flag();
        } else {
            printf("PID natogri.\n");
        }

        // Optionally, terminate the child process after displaying the flag
        //kill(pid, SIGTERM);
    }

    return 0;
}
