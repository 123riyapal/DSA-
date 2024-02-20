#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
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
    // $$$$$$$$$$$$$ Brute Force Appraoch$$$$$$$$$$$$$
    // set<vector<int>> st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(arr[i]+arr[j]+arr[k]==0){
    //              vector<int> temp={arr[i],arr[j],arr[k]};
    //              sort(temp.begin(),temp.end());
    //              st.insert(temp);
    //             }

    //         }
    //     }
    // }
    // ***********Better Approach*****************

    // set<vector<int>> st;
    // for(int i=0;i<n;i++){
    //     set<int> hashSet;
    //     for(int j=i+1;j<n;j++){
    //         int third=-(arr[i]+arr[j]);
    //         if(hashSet.find(third)!=hashSet.end()){
    //             vector<int> temp={arr[i],arr[j],third};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);
    //         }
    //         hashSet.insert(arr[j]);
    //     }
    // }

    sort(arr, arr + n);
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;

            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<"[";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<< ans[i][j]<<" ";
            }
                                cout << "]";

            cout << endl;
        }
        return 0;
    }