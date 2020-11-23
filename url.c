#include <stdio.h>

int main(int argc, char *argv[])
{
        if (argc != 3) {
                printf("Usage : %s FilteringURL FilteringSTR\n", argv[0]);
                return 0;
        }

        char *url = argv[1];
        char *f_str = argv[2];

        int is_detected = 0;
        int https_check = 0;

        if (strncmp(url, "https://", 8) == 0) {
                https_check = 1;
        } else if (strncmp(url, "http://", 7) == 0) {
                https_check = 0;
        }


        if (strstr(url, f_str) != NULL) {
                is_detected = 1;
        } else {
                is_detected = 0;
        }


        if (is_detected) {
                printf("[%s] is not safe\n", url);
        } else {
                printf("[%s] is safe\n", url);
        }

        return 0;
}
