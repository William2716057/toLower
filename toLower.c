#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];  // Declare the string variable

    //Input prompt
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin); 

    //Remove newline character
    str[strcspn(str, "\n")] = '\0';

    //Convert to lowercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
