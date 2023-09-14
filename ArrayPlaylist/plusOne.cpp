#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int rem=1;
vector<int> ans;
reverse(arr,arr+n);
int i=0;
while (i<n)
{
    if(arr[i]+rem<9){
        arr[i]=arr[i]+rem;
        ans.push_back(arr[i]);
        rem=0;
    }
    else if(arr[i]+rem>=9){
        arr[i]=0;
        ans.push_back(arr[i]);
        rem=1;
    }
    i++;
}
if(rem==1){
    ans.push_back(rem);
}

    reverse(ans.begin(),ans.end());
for (int  i = 0; i <ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}