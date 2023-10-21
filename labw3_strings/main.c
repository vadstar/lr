#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void shuffleString(char* str) {
    int length = strlen(str);
    for (int i = length - 1, temp = 0; i > 0; i--) {
        int j = rand() % (i + 1);
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    
    srand(time(NULL)); 

    char input[100];
    setlocale(LC_ALL, "");
    printf("Waiting for input: ");
    setlocale(LC_ALL, ".866");
    fgets(input, sizeof(input), stdin);

    size_t input_len = strlen(input);
    if (input_len > 0 && input[input_len - 1] == '\n') {
        input[input_len - 1] = '\0';
    }

    shuffleString(input);

    for (int i = 0; i < input_len; i++) {
      
            putchar(input[i]);

    }
    putchar('\n');

    return 0;
}
