#include <stdio.h>
#include <ctype.h>

void convertToLower(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		str[i] = tolower(str[i]);
		i++;
	}
}

int main() {
	char str[100];

	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);


//	convertToLower("Converted: %\n", str);
	return 0;
}
