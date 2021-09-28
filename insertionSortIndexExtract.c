#include <stdio.h>

void insertionSort(int arr[], int n)
{

    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

void compare(int arr1[], int arr2[], int idx[], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        j=0;
        while(arr1[i] != arr2[j]){
            j++;
        }

        idx[i] = j + 1;
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);
    
    int *arr1, *arr2, *idx;
    arr1 = (int *) malloc(sizeof(int)*n);
    arr2 = (int *) malloc(sizeof(int)*n);
    idx = (int *) malloc(sizeof(int)*n);
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int loop = 0; loop < n; loop++)
    {
        arr2[loop] = arr1[loop];
    }
    
    insertionSort(arr2, n);
    compare(arr1, arr2, idx, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", idx[i]);
    }


    return 0;
}
