#include<iostream>
#include   <vector>
#include <queue>
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

Node* createBSTUtility(Node* root,vector<int>&data, int i) {
    if(root == nullptr) {
        Node* newNode = new Node(data[i]);
        return newNode;
    }

    if(root->data > data[i]) {
        root->left = createBSTUtility(root->left,data,i);
    } else {
        root->right = createBSTUtility(root->right,data,i);
    }

    return root;
}

Node* createBST(vector<int>&data) {
    Node* root = nullptr;
    for(int i=0; i<data.size(); i++) {
        root = createBSTUtility(root,data,i);
    }

    return root;
}

void print(Node* root) {
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == nullptr) {
            cout<<endl;
            if(!q.empty()) q.push(nullptr);
        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}


void solve(Node* root, int &k, int &ans) {
    if(root->left == nullptr && root->right == nullptr) {
        return;
    }

    solve(root->left,k,ans);
    k--;

    if(k == 1){
        ans = root->data;
    }

}

int kthSmallest(Node* root, int k) {
    int ans = 0;
    solve(root,k,ans);
    return ans;

}

int main() {
 
    vector<int> data = {5};
    Node* root = createBST(data);

    cout<<"printing : "<<endl;
    print(root);


    cout<<"kth smallest element is : "<<kthSmallest(root,1);

return 0;
}