#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FLAG_FILE "/root/flag.tt"
#define MOUNT_POINT "/mnt/flag_mount"
#define FLAG_CONTENT "HD(bayroqni o'rnatish!!)"

// Function to simulate mounting the flag
void mount_flag() {
    printf("Mounting flag at %s...\n", MOUNT_POINT);
    // Simulate creating a file that contains the flag
    FILE *flag = fopen(FLAG_FILE, "w");
    if (flag) {
        fprintf(flag, "%s\n", FLAG_CONTENT);
        fclose(flag);
        printf("Flag mounted successfully!\n");
    } else {
        printf("Failed to create flag file!\n");
    }
}

// Function to read the flag
void read_flag() {
    printf("Reading flag...\n");
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
    // Simulate mounting the flag
    mount_flag();
    // Simulate reading the flag
    read_flag();

    return 0;
}

// sudo mkdir /root/flags

