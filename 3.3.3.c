#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // Include this header for the sleep function

int main() {
    while (1) {
        // Continuously allocate memory
        char *memory = malloc(99999 * 99999); 
        if (memory == NULL) {
            exit(1);
        }
        // Optional: Print a message every so often
        
        sleep(1); // Sleep for a second to avoid flooding the output
    }
    return 0;
}
