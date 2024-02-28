#include <stdio.h>
#include <stdlib.h>

int string_to_int(char* str) {
    int result = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        }
        else if (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\r') {
            printf("Error: Invalid character '%c' found\n", *str);
            exit(EXIT_FAILURE);
        }
        str++;
    }
    return result;
}

int main() {
    FILE* file;
    char buffer[100];
    int sum = 0;
    errno_t err;

    err = fopen_s(&file, "ini.txt", "r");
    if (err != 0) {
        printf("Error: Could not open the file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        sum += string_to_int(buffer);
    }

    fclose(file);

    printf("%d\n", sum);

    return 0;
}
