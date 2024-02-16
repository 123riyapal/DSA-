#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int helperFunction(vector<int>&nums){
        int prev=nums[0];
        int prev2=0;
        int curr=0;
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int nontake=0+prev;
            curr=max(take,nontake);
            prev2=prev;
            prev=curr;
        }
        return prev;;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int> arr1,arr2;
        for(int i=0;i<nums.size();i++){
            if(i!=0)arr1.push_back(nums[i]);
            if(i!=nums.size()-1)arr2.push_back(nums[i]);

        }
        return max(helperFunction(arr1),helperFunction(arr2));
    }
};
int main(){
Solution s;
int n;
cin>>n;
vector<int> nums(n,0);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cout<<s.rob(nums);
return 0;
}