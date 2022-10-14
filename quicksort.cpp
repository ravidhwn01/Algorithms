#include <iostream>
using namespace std;
void printarray(int *arr, int n)
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
    int i = low - 1;
    int j = high+1;
    int temp;
    do
    {

        do 
        {
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
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
    int pivotIndex;
    if (low < high)
    {
        
        pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
int main()
{

    // int arr[] = {18, 7 ,5, 2 ,1};
    int arr[] = {1, 2, 3, 467, 500, 60, 70, 8,234,6,7,8,5,4,3,2,1,1,32,4,19, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, length);
    quickSort(arr, 0, length - 1);
    printarray(arr, length);
    return 0;
}