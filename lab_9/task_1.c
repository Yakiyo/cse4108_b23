#include <ctype.h>
#include <stdio.h>
#include <string.h>

// A - Z = a - z = 25
// a = 65, Z = 90
// a = 97, z = 122

int main() {
    char str[101];
    gets(str);
    int len = strlen(str);
    for (int i =0; i < len; i++) {
        char c = str[i];
        if (isalpha(c) == 0) continue;
        if (isupper(c) != 0) {
            c = c - 3;
            if (c < 'A') c += 26;
            str[i] = c;
        } else if (islower(c) != 0) {
            c = c -3;
            if (c < 'a') c += 26;
            str[i] = c;
        }
    }

    printf("%s", str);

    return 0;
}