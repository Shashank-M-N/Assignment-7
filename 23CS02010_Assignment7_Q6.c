#include <stdio.h>

int main()
{
    int c = 0, count, i, j;
    char a[100], b[100];
    printf("Enter a string: ");
    gets(a);
    printf("Enter the substring to be searched: ");
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == b[0]) {
            count = 0;
            for (j = 0; b[j] != '\0'; j++)
                if (b[j] == a[i + j])
                    count++;
            if (j == count)
                c = 1;
        }
    if (c)
        printf("The substring exists in the string.");
    else
        printf("The substring doesn't exist in the string.");
    return 0;
}