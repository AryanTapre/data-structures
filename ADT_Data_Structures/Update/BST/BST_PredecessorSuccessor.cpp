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

Node* createBSTHelper(Node* root, vector<int> &v, int data) {
    if(root == nullptr) {
        Node* newNode = new Node(v[data]);
        return newNode;
    }

    if(root->data < v[data]) {
        root->right = createBSTHelper(root->right,v,data);
    }
    else {
        root->left = createBSTHelper(root->left,v,data);
    }
    return root;
}

Node* createBST(vector<int> &data) {
    Node* root = nullptr;
    for(int i=0; i<data.size(); i++ ){
        root = createBSTHelper(root,data,i);
    }
    
    return root;
}

Node* findNode(Node* root, int target) {

    if(root == nullptr) {
        return root;
    }

    if(root->data == target) {
        return root;
    }
    else if(target < root->data) {
        return findNode(root->left,target);
    }
    else {
        return findNode(root->right,target);
    }
}

int getMaxi(Node* root) {
    Node* temp = root;
    if(temp == nullptr) {
        return -1;
    }

    while(temp->right != nullptr) {
        temp = temp->right;
    }
    return temp->data;
}

int getMini(Node* root){
    Node* temp = root;
    if(temp == nullptr){
        return -1;
    }

    while(temp->left != nullptr){
        temp = temp->left;
    }
    return temp->data;
}

// FIXME: Do not use this approach..
int inOrder_successor(Node* root, int target){
    Node* targetNode = findNode(root,target);
    int successor = getMini(root->right);
    return successor;
}

int inOrder_predecessor(Node* root, int target) {
    Node* targetNode = findNode(root,target);
    int predecessor = getMaxi(targetNode->left);
    return predecessor;
}


// TODO: Save inOrder traversal, return left and right of targeting element..
void inOrder_traversal(Node* root,vector<int>& traversal) {
    // LNR
    if(root == nullptr){
        return;
    }

    inOrder_traversal(root->left,traversal);
    traversal.push_back(root->data);
    inOrder_traversal(root->right,traversal);
}

int binarySearch(int target,vector<int> &traversal) {
    int start = 0;
    int end = traversal.size()-1;
    int mid = start+(end-start)/2;

    while(start <= end) {
        if(target == traversal.at(mid)){
            return mid;
        }
        else if(target < traversal.at(mid)){
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
        
        mid = start + (end-start)/2; 
    }

    return -1;
}

int inOrder_predecessor_optimized(Node* root, int target) {
    vector<int> traversal;
    inOrder_traversal(root,traversal);
    int ans = binarySearch(target,traversal);
    
    if(ans != -1 && ans-1 >= 0){
        return traversal[ans-1];
    }
    else {
        return -1;
    }
}

int inOrder_successor_optimized(Node* root, int target) {
    vector<int> traversal;
    inOrder_traversal(root,traversal);
    int ans = binarySearch(target,traversal);

    if(ans != -1 && ans+1 != traversal.size()){
        return traversal[ans+1];
    }
    else {
        return -1;
    }
}

int main() {
 
    vector<int> data = {10,0,56,100,99,56,56,45,87};
    Node* root = createBST(data);
    
    // cout<<"predecessor : "<<inOrder_predecessor(root,99)<<endl;

    // cout<<"successor : "<<inOrder_successor(root,10);

    cout<<"predecessor : "<<inOrder_predecessor_optimized(root,56);
    cout<<endl;
    cout<<"successor :"<<inOrder_successor_optimized(root,56);


return 0;
}