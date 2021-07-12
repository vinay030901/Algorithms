#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1, n2 = h - mid, k, j;
    int i;
    int L[n1];
    int R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + j + 1];
    i = 0;
    j = 0;
    k=l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int h)
{
    if (l >= h)
        return;
    int mid = l + (h - l) / 2;
    mergeSort(arr, l, mid );
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}
int main()
{
    int arr[] = {32, 1, 4, 23, 66, 76, 34, 67, 89, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}