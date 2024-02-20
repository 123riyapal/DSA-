#include<iostream>
#include<vector>
#include<queue>

using namespace std;
class Solution{
    public:
    int TimeTakenByKthPersonToBuyTicket(vector<int> &tickets ,int k){
        // <!-- Method I using Queue-->
        // TC=O(N);
        // SC=O(N);
        // *queue<int>q;
        // *for(int i=0;i<tickets.size();i++){
        // *    q.push(i);
        // *}
        // *int time=0;
        // *while(tickets[k-1]!=0){
        // *    tickets[q.front()]--;
        // *    time++;
        // *    if(tickets[q.front()]){
        // *        q.push(q.front());
        // *    }
        // *    q.pop();

        // *}

        // *return time;


        // Solution without Queue 
        // TC=0(N);
        // SC=0(N);
        int time=0;
        for(int i=0;i<k;i++){
            time+=min(tickets[k-1],tickets[i]);
        }
        for(int i=k;i<tickets.size();i++){
            time+=min(tickets[k-1]-1,tickets[i]);
        }
        return time;
    
    }

};
int main(){
    int n;
    cin>>n;
vector<int> tickets(n,0);
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    tickets[i]=x;
}
Solution obj;
cout<<obj.TimeTakenByKthPersonToBuyTicket(tickets,3);

return 0;
}