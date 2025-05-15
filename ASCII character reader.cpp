
#include <stdio.h>

int main() {
    printf("Press any key: ");
    int ch = getchar();  // Waits for user input

    printf("You pressed: %c (ASCII: %d)\n", ch, ch);
    return 0;
}

