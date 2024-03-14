#include <stdio.h>

int main()
{
    int count = 0;
    char ch, a[100];
    printf("Enter a string: ");
    gets(a);
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] == ch)
            count++;
    printf("Frequency of %c is: %d", ch, count);
    return 0;
}