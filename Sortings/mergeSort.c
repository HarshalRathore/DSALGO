#include <stdio.h>
#include <stdlib.h>
// is stable
// space complexity is less
// is adaptive

void Print(int *Ar, int size)
{

    for (int k = 0; k < size; k++)
    {
        printf("%d ", Ar[k]);
    }
    printf("\n");
}

void MergeSort(int Ar[], int size)
{

    if (size>1)
    {

        int mid = size / 2;

        int leftSize = size - mid;
        int rightSize = mid;

        int leftArr[leftSize];
        int rightArr[rightSize];

        for (int i = 0; i < leftSize; i++)
        {
            leftArr[i] = Ar[i];
        }

        for (int j = 0; j < rightSize; j++)
        {
            rightArr[j] = Ar[j+mid];
        }

        printf("left Array \n");
        Print(leftArr, leftSize);

        MergeSort(leftArr, leftSize);

        printf("right Array \n");
        Print(rightArr, rightSize);

        MergeSort(rightArr, rightSize);

        int l = 0, m = 0, n = 0;

        while (l < leftSize && m < rightSize)
        {
            if (leftArr[l] <= rightArr[m])
            {
                printf("replacing %d with %d in position %d \n", Ar[n], leftArr[l], n);
                Print(Ar, size);
                Ar[n] = leftArr[l];
                l++;
                n++;
            }

            else
            {
                printf("replacing %d with %d in position %d \n", Ar[n], rightArr[m], n);
                Print(Ar, size);
                Ar[n] = rightArr[m];
                m++;
                n++;
            }
        }

        while (l<leftSize)
        {
            Ar[n]=leftArr[l];
            l++;
            n++;
        }
        
        while (m<rightSize)
        {
            Ar[n]=rightArr[m];
            m++;
            n++;
        }
        
    }
}

int main()
{

    int Ar[] = {10, 7, 23, 13, 22, 53};
    int size = sizeof(Ar) / sizeof(int);

    printf("Before sort \n");

    Print(Ar, size);

    printf("\nAfter sort \n");

    MergeSort(Ar, size);

    Print(Ar, size);
}
