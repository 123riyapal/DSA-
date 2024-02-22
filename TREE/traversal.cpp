#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root)
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "Enter The value of left child of " << x << " ";

    temp->left = insert(temp);
    cout << "Enter The value of right child of " << x << " ";

    temp->right = insert(temp);
    return temp;

    return temp;
}
void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void InOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout << root->data << " ";

    InOrderTraversal(root->right);
}
void PostOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}
int height(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return std::max(leftHeight, rightHeight) + 1;
    }
}

void printGivenLevel(Node* root, int level) {
    if (root == nullptr) {
        return;
    }
    if (level == 1) {
        std::cout << root->data << " ";
    } else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void levelOrderTraversal(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printGivenLevel(root, i);
    }
}


int main()
{
    Node *tree = nullptr;

    // Example usage:
    tree = insert(tree);
    cout << "PreOrder Traversal :" << endl;
    preOrderTraversal(tree);
    cout << endl;
    cout << "InOrder Traversal :" << endl;
    InOrderTraversal(tree);
    cout << endl;
    cout << "PostOrder Traversal :" << endl;
    PostOrderTraversal(tree);
    cout << endl;
    cout << "Level-order traversal: "<<endl;
    levelOrderTraversal(tree);

    return 0;
}
