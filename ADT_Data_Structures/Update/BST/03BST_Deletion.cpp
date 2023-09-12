// Delete a given Node from BST..
#include<iostream>
#include<queue>
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



Node* search(Node* &root, int& target) {
    if(root == nullptr) {
        return nullptr;
    }

    if(root->data == target) {
        return root;
    } else if(root->data > target) {
        return search(root->left,target);
    }  else {
        return search(root->right,target);
    }
}

// TODO: finding the maximum node..
Node* predecessor(Node* &root) {
    if(root == nullptr) {
        return nullptr;
    }

    if(root->right == nullptr) {
        return root->right;
    }

    Node* temp = root;
    while(temp->right != nullptr) {
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* root, int target) {
    if(root == nullptr) {
        return nullptr;
    }

    if(root->data == target) {
        // check for leaf node.
        if(root->left == nullptr && root->right == nullptr) {
               delete root;
               return nullptr;
        }
        // check if only left sub tree exits
        else if(root->left != nullptr && root->right == nullptr) {
            Node* bacha = root->left;
            delete root;
            return bacha;
        }
        // check if only right sub tree exits
        else if(root->left == nullptr && root->right != nullptr) {
            Node* bacha = root->right;
            delete root;
            return bacha;
        }
        else {
            // check if left and right sub tree exits
            Node* bacha = predecessor(root->left);
            root->data = bacha->data;
            
            deleteNode(root->left,bacha->data); // deleting duplicate Bacha

            return root;
        }

    } 
    else {
        if(root->data > target) {
            root->left = deleteNode(root->left,target);
        } 
        else {
            root->right = deleteNode(root->right,target);
        } 
    }

    
}

int main() {
 
    vector<int> data = {60,45,35,30,40,38,55,58,59,80,70,65,75,90,100,20};
    Node* root = createBST(data);
    cout<<"before : "<<endl;
    print(root);
    deleteNode(root,80);
    
    cout<<endl<<"after : "<<endl;
    print(root);

return 0;
}