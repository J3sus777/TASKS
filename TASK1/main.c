#include <stdio.h>
#include <string.h>

void reverse(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void rotateWordsLeft(char* str) {
    int len = strlen(str);

    if (len < 1) {
        printf("\n");
        return;
    }

    reverse(str, str + len - 1);

    int wordStart = 0;
    int wordEnd = 0;
    int spaceFlag = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0') {
            if (spaceFlag) {
                continue;
            }
            wordEnd = i - 1;
            reverse(str + wordStart, str + wordEnd);
            wordStart = i + 1;
            spaceFlag = 1;
        } else {
            spaceFlag = 0;
        }
    }
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s$\n", str);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("\n");
        return 0;
    }

    char* input = argv[1];
    rotateWordsLeft(input);

    return 0;
}
