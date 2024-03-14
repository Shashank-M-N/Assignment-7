#include <stdio.h>

int main()
{
    int a = 1, l;
    char str[100];
    printf("Input: ");
    gets(str);
    for (l = 0; str[l] != '\0'; l++);
    for (int i = 0; i <= l / 2; i++)
        if (str[i] != str[l - 1 - i]) {
            a = 0;
            break;
        }
    if (a)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome.");
    return 0;
}