#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Write C code here
    char text[]="zelo";
    char result;
    
    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        if (isupper(text[i])) {
            result = (char)((text[i] + 3 - 'A') % 26 + 'A');
            printf("%c", result);
        } else if (islower(text[i])) {
            result = (char)((text[i] + 3 - 'a') % 26 + 'a');
            printf("%c", result);
        } else {
            // If the character is not a letter, print it as it is.
            printf("%c", text[i]);
        }
    }

    return 0;
}
