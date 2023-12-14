#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
    int didSwap=0;
        for (int j = 1; j < n-i; j++)
        {
            if (arr[j-1] > arr[j])
            {
           swap(arr[j-1], arr[j]);
           didSwap=1;
            }
        }
        if(didSwap==0)
        break;

        cout<<"it runs"<<endl;
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

    bubbleSort(arr, n); /* "<-- this take Approx(o(n^2)) time complexity \--> " */
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}