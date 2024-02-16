#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
// OPTIMAL SOLUTION***********
// **Time Complexity =O(N)

// int SecondLargset(int v[], int n)
// {
//     int largest = v[0];
//     int secondLargest = -1;
//     for (int i = 1; i < n; i++)
//     {
//         if (v[i] > largest)
//         {
//             secondLargest = largest;

//             largest = v[i];
//         }
//         else if (v[i] < largest && v[i] > secondLargest)
//         {
//             secondLargest = v[i];
//         }
//     }
//     return secondLargest;
// }
// BETTER SOLUTION*******
// **Time Complexity =O(N)

// int SecondLargset(int v[], int n)
// {
//     int largest = INT_MIN;
//     for(int i=0;i<n;i++){
//         largest=max(v[i],largest);
//     }
//     int secondLargest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] >secondLargest && v[i]!=largest )
//         {
//             secondLargest = v[i];

//         }
//     }
//     return secondLargest;
// }

// BRUTE FORCE APPROACH Time 
// **Time Complexity =O(NLOG N)
int SecondLargset(int v[], int n)
{
    sort(v,v+n);
    int largest = v[n-1];
    int secondLargest=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]!=largest){
            secondLargest=v[i];
            break;
        }
    }
    return secondLargest;
}
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    cout << SecondLargset(arr, n) << endl;
    return 0;
}