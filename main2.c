#include <stdio.h>

int main() {
    char str[] = "My name is Andrew %"; /* тут 14, % вказівник кінця строки*/
    
    int count = 0;

    
    for (int i = 0; str[i] != '%'; i++) {
        if (str[i] != ' ') {
            count++;
        }
    }
    
    printf("Кількість символів у рядку: %d\n", count);

    return 0;
}
