#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> arr1;
    int ele=0;
    bool leader;

    // *********Brute Force Approach********
    for(int i=0;i<n;i++){
        leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            arr1.push_back(arr[i]);
        }
        
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << endl;
    }

    // *********Optimal Approach***********

    // vector<int> arr1;
    // int ele = INT_MIN;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (arr[i] > ele)
    //     {
    //         ele = arr[i];
    //         arr1.push_back(ele);
    //     }
    //     ele = max(ele, arr[i]);
    // }
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     cout << arr1[i] << endl;
    // }
    return 0;
}