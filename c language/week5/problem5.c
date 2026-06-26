#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int cpArr[n];
        for (int i = 0; i < n; i++)
        {
            cpArr[i] = arr[i];
        }

        // int minValue=cpArr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (cpArr[i] > cpArr[j])
                {
                    int temp = cpArr[i];
                    cpArr[i] = cpArr[j];
                    cpArr[j] = temp;
                }
            }
        }

        // ///print the cpoy arr
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", cpArr[i]);
        // }
        // printf("\n");

        int tempArr[n];
        for (int i = 0; i < n; i++)
        {
            tempArr[i] = cpArr[i] - arr[i];
            if (tempArr[i] < 0)
            {
                tempArr[i] = tempArr[i] * (-1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", tempArr[i]);
        }

    }

    return 0;
}