#include<iostream>
#include<queue>

using namespace std;
// ***Implementation using Queue***
class Node
{

public:
int data;
Node *left;
Node *right;
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};


int main(){
queue<Node *> q;
int rootNode;
cin>>rootNode;
Node *root= new Node(rootNode);
q.push(root);

while (!q.empty())  
{
    Node *temp=q.front();
    q.pop();
    cout<<temp->data<<" ";
    int leftNode;
    cin>>leftNode;
    if(leftNode!=-1){
        temp->left=new Node(leftNode);
        q.push(temp->left);
    }
    int rightNode;
    cin>>rightNode;
    if(rightNode!=-1){
        temp->right=new Node(rightNode);
        q.push(temp->right);
    }
    cout<<endl;
}

return 0;
}