#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

// Function to display the flag message

// Function to generate instruction file
void generate_instructions() {
    FILE *file = fopen("instructions.txt", "w");
    if (file != NULL) {
        fprintf(file, "1. HD{Hozir_|_yana_bir_marta_tug'ilganman}");
        fclose(file);
    } else {
        perror("Could not create instructions.txt");
    }
}

int main() {

    // Inform the user that the process has started
    printf("Flagni olish uchun instruction.txt fileni oching\n");
    // Generate the instruction file for the students
    generate_instructions();

    return 0;
}
