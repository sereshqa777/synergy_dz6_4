#include <cstdio>
#include <cstring>

int main() {
    const int MAX_LENGTH = 100;
    char input_str[MAX_LENGTH];

    printf("Vvedite: ");
    scanf("%[^\n]", input_str);

    memmove(input_str, input_str + 1, strlen(input_str));

    printf("Result: %s\n", input_str);

    return 0;
}
