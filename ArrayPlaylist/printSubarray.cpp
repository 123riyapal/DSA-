#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int mxSum=INT_MIN;

    // ****Brute Force Approach****
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //             sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //                 mxSum=max(sum,mxSum);

    //     }

    // }
    // ***Better Approach 1 ****
    // for (int i = 0; i < n; i++)
    // {
    //     sum = 0;

    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //     }
    //     mxSum = max(sum, mxSum);
    // }
    // ***Better Approach 2***
    // int prefixArr[n]={0};
    // prefixArr[0]=arr[0];
    // for(int i=1;i<n;i++){
    //     prefixArr[i]=arr[i]+prefixArr[i-1];
    // }
    // for(int i=1;i<n;i++){
    //     sum=0;
    //     for(int j=0;j<i;j++){
    //         sum=prefixArr[i]-prefixArr[j];
    //         mxSum=max(mxSum,sum);
    //     }
    // }
    // Optimal Approach -Kadane's Algo

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        mxSum=max(mxSum,sum);
    }
    cout << mxSum << endl;
    return 0;
}