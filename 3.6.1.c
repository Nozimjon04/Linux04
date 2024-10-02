#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Path to the flag file
    const char *flag_file = "/home/phoenix/flag.txt";
    const char *flag_content = "HD{cron_'chronos'dan_keladi,_va_u_vaqtni_anglatadi}";

    // Create and write the flag to the file
    FILE *file = fopen(flag_file, "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fprintf(file, "%s\n", flag_content);
    fclose(file);

    return EXIT_SUCCESS;
}
// sudo adduser phoenix
// sudo mkdir -p /root/cron_task
// cd /root/cron_task
// gcc -o get_flag get_flag.c
// sudo su - phoenix
// crontab -e => * * * * * /root/cron_task/get_flag


