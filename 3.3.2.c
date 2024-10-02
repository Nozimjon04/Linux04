#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int input_pid;
    
    // Prompt the user to enter the shell PID
    printf("Enter your shell PID: ");
    scanf("%d", &input_pid);
    
    // Compare the entered PID with the current process PID
    if (input_pid == getpid()) {
        printf("HD{Siz kiritgan PID to'g'ri}\n");
    } else {
        printf("PID Notog'ri!!\n");
    }

    return 0;
}
