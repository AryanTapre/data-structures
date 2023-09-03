// Get the height of tree..

#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int _data) : data(_data) {
            left = nullptr;
            right = nullptr;
        }
};


Node* buildTree(vector<int>& data,int &i) {

    if(data.at(i) == -1) {
        return nullptr;
    }
    Node* root = new Node(data.at(i));
    i++;
    root->left = buildTree(data,i);
    i++;
    root->right = buildTree(data,i);

    return root;

}


int height(Node* root) {
    if(root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int ans = max(leftHeight,rightHeight) + 1;
    return ans;
}

int main() {
  
    vector<int> data = {10,70,90,15,-1,-1,-1,-1,80,60,-1,-1,50,-1,-1};
    int i = 0;
    Node* root = buildTree(data,i);
    cout<<"height : "<<height(root);

return 0;
}