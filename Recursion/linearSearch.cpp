#include <iostream>
using namespace std;
int linearSearch(int arr[], int key, int n,int i)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i+1;
    }
    return linearSearch(arr, key, n,i+1);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin>>key;
    cout << linearSearch(arr,key,n,0);

    return 0;
}