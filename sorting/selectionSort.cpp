#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int mini;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n); /* "<-- this take Approx(o(n^2)) time complexity \--> " */

    //  for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]){   <-- this take o(n^2) time complexity /-->
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    //  }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}