// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quickSort(int *arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex + 1, high);
    }
}
int main()
{
    
    int arr[] = {18, 7 ,5, 2 ,1};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int length = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, length);
    quickSort(arr, 0, length - 1);
    printarr(arr, length);
    return 0;
}