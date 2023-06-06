// 12S22012 - Reinhard Batubara
// 12S22001 - Winfrey Nainggolan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int remainder;
    int length = atoi(argv[1]);
    
    char input[101];
    fgets(input, 101, stdin);
    input[strcspn(input, "\n")] = '\0';

    int input_len = strlen(input)-1;
    if (input_len % length == 0)
    {
        remainder = 0;
    } else {remainder = 1;}
    
    int n = input_len / length + (remainder);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < length; j++) {
            int index = i * length + j;
            if (index < input_len) {
                printf("%c", input[index]);
            } 
            if (index >= input_len){
                printf("#");
            }
        }
        if (i + 1 != n) {
            printf("\n");
        }
    }

    return 0;
}

