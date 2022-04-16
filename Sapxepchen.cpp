#include <stdio.h>
void InsertionSort(int a[], int n)
{
    int i, j, temp, e = 1;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
            a[j + 1] = a[j];
        a[j + 1] = temp;
        printf("Buoc %d: ", e);
        e++;
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Buoc %d: %d\n", 0, a[0]);
    InsertionSort(a, n);
    // cout << "Mang sau khi sap xep: ";
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    return 0;
}