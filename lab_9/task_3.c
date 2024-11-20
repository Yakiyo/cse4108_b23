#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char pattern[21];
    printf("Enter the text: ");
    gets(str);
    printf("Enter the pattern: ");
    gets(pattern);
    int hasSubStr = 0;
    // first character of pattern
    char pst = pattern[0];
    // length of pattern
    char plen = strlen(pattern);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != pst) continue;
        // assume it is a substr
        int isSubStr = 1;
        for (int j = 0; j < plen; j++) {
            if (pattern[j] != str[i + j]) {
                // not substr/./;
                isSubStr = 0;
                break;
            }
        }
        if (isSubStr == 0) continue;
        printf("%d ", i);
        hasSubStr = 1;
    }

    if (hasSubStr == 0) {
        printf("-1");
    }
    return 0;
}