#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        // Uppercase ? Lowercase
        ch = ch + 32;
    } else if (ch >= 'a' && ch <= 'z') {
        // Lowercase ? Uppercase
        ch = ch - 32;
    }

    printf("%c", ch);
    return 0;
}

