#include <stdio.h>

int large(int a[], int l, int n, int i) {
    if (i == n)
        return l;
    else {
        if (a[i] > l)
            l = a[i];
        large(a, l, n, i + 1);
    }
}

int main()
{
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The largest element is: %d", large(a, a[0], n, 0));
    return 0;
}