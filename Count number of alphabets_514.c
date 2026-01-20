#include <stdio.h>
int main() {
    char str[200];
    int i;
    int lowercase = 0, uppercase = 0, consonants = 0, digits = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            lowercase++;
        }
        else if (isupper(str[i])) {
            uppercase++;
        }
        if (isalpha(str[i])) {  
            char ch = tolower(str[i]);
            if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') {
                consonants++;
            }
        }
        if (isdigit(str[i])) {
            digits++;
        }
    }
    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    return 0;
}
