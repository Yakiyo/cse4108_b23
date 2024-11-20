#include <stdio.h>
#include <string.h>

// '0' = 48, '9' = 57

int main() {
    char str[101];
    char com[202];
    int idx = 0;
    gets(str);
    int len = strlen(str);

    for (int i = 0; i < len;) {
        // printf("i: %d", i);
        char c = str[i];
        int count = 1;
        while (str[i + count] == c) {
            count++;
        }
        // printf(" c: %c, count: %d\n", c, count);
        com[idx] = c;
        idx++;
        // single digit
        if (count < 10) {
            com[idx] = '0' + count;
            // handle double digit
        } else if (count < 100) {
            int a = count / 10;
            int b = count % 10;
            com[idx] = '0' + a;
            idx++;
            com[idx] = '0' + b;
            // handle triple digit
        } else {
            com[idx] = '1';
            idx++;
            com[idx] = '0';
            idx++;
            com[idx] = '0';
        }
        idx++;
        i+= count;
    }

    if (strlen(com) < strlen(str)) {
        printf("%s", com);
    } else {
        printf("%s", str);
    }

    return 0;
}