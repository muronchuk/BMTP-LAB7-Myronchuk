#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char) str[i]);
    }
}

int isValidEnding(char ch) {
    return ch == '.' || ch == '!' || ch == '?' || ch == ')';
}

int main() {
    char sentence[256];
    printf("Введіть речення: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Видалення символу нового рядка, якщо є
    size_t len = strlen(sentence);
    if (len > 0 && (sentence[len - 1] == '\n' || sentence[len - 1] == '\r')) {
        sentence[len - 1] = '\0';
        len--;
    }

    // Перевірка, чи останній символ правильний
    if (len == 0 || !isValidEnding(sentence[len - 1])) {
        printf("Речення має закінчуватися '.', '!', '?' або ')'.\n");
        return 1;
    }

    toLowerCase(sentence); // Перетворення речення у нижній регістр

    // Пошук слова "девелопер" у реченні
    if (strstr(sentence, "девелопер") != NULL) {
        printf("Так\n");
    } else {
        printf("Ні\n");
    }

    return 0;
}
