#include <stdio.h>
#include <stdlib.h>

int main() {
    // Run the 'which' command to check if 'flagapp' is installed
    int status = system("which flagapp > /dev/null 2>&1");

    // Check the status of the system command
    if (status != 0) {
        // If 'flagapp' is not found, print the success message
        printf("HD{Siz_testdan_muvaffaqqiyatli_o`tdingiz}\n");
    } else {
        // If 'flagapp' is still installed, notify the user
        printf("flagapp is still installed!\n");
    }

    return 0;
}