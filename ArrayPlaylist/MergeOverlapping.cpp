#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n ,vector<int> (2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
    // ****Brute Force Approach****
	// for(int i=0;i<n;i++){
	// 	int start=arr[i][0];
	// 	int end=arr[i][1];
	// 	if(ans.empty()==false && end<=ans.back()[1])continue;
	// 	for(int j=i+1;j<n;j++){
	// 		if(arr[j][0]<=end){
	// 			end=max(end,arr[j][1]);
	// 		}
	// 		else{
	// 			break;
	// 		}
	// 	}
    //             ans.push_back({start, end});
    //     }
    
    // *****Better Approach *******
    for(int i=0;i<n;i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
        for(int i=0;i<ans.size();i++){
            cout<<"{"<<" ";
            for (int  j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<"}"<<endl;
            
        }

return 0;
}