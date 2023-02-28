#include <stdio.h>
#include <string.h>

void inverteString(char string[]) {
    int tamanho = strlen(string);
    for(int i=0; i<tamanho/2; i++) {
        char temp = string[i];
        string[i] = string[tamanho-1-i];
        string[tamanho-1-i] = temp;
    }
}

int main() {
    char string[] = "hello world";
    printf("String original: %s\n", string);
    inverteString(string);
    printf("String invertida: %s\n", string);
    return 0;
}
