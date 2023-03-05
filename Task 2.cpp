#include <cstdio>
#include <cstring>

int main() {
    const int MAX_LENGTH = 100;
    char input_str[MAX_LENGTH];
    char output_str[MAX_LENGTH];

    printf("Vvedite stroku: ");
    scanf("%[^\n]", input_str);

    int len = strlen(input_str);
    for (int i = 0; i < len; i++) {
        output_str[i] = input_str[len - i - 1];
    }
    output_str[len] = '\0';

    printf("Result: %s\n", output_str);

    return 0;
}
