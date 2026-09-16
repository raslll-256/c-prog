#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {3, 4, 5, 7, 9};
    int c[10];

    while (i < 5 && j < 5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < 5)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < 5)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
