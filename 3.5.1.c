#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define USERNAME "phoenix"
#define PASSWORD "rebirth"
#define PACKAGE_NAME "Spackage_1.0-1.deb"
#define FLAG_FILE "flag.txt"

// Function to simulate the package installation
void install_package() {
    printf("Installing package %s...\n", PACKAGE_NAME);
    FILE *flag = fopen(FLAG_FILE, "w");
    if (flag) {
        fprintf(flag, "HD(barcha kelajakdagi pentesterlar uchun tanlangan paket)\n");
        fclose(flag);
        printf("Package muvafaqqiyatli o'rnatildi!\n");
    } else {
        printf("Failed to create flag file!\n");
    }
}

// Function to run the package and get the flag
void run_package() {
    printf("Retrieving flag...\n");
    FILE *flag = fopen(FLAG_FILE, "r");
    if (flag) {
        char buffer[256];
        fgets(buffer, sizeof(buffer), flag);
        printf("Flag: %s", buffer);
        fclose(flag);
    } else {
        printf("Flag file not found!\n");
    }
}

int main() {
    char username[50];
    char password[50];

    // Simulate user login
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0) {
        printf("Login successful!\n");

        // Check if the package exists (simulated)
        if (access(PACKAGE_NAME, F_OK) != -1) {
            // Simulate package installation
            install_package();
            // Simulate running the package to get the flag
            run_package();
        } else {
            printf("Package %s not found!\n", PACKAGE_NAME);
        }
    } else {
        printf("Invalid username or password!\n");
    }

    return 0;
}
