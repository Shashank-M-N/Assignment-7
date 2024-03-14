#include <stdio.h>

void reverse(int l, char a[], int i)
{
    if (i>=l/2)
        printf("%s",a);
    else {
        a[i]+=a[l-1-i];
        a[l-1-i]=a[i]-a[l-1-i];
        a[i]-=a[l-1-i];
        reverse(l, a, i+1);
    }
}

int main()
{
    int l;
    char ch[100];
    printf("Input: ");
    gets(ch);
    for(l=0;ch[l]!='\0';l++);
    reverse(l, ch, 0);
    return 0;
}