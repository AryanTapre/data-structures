// build a binary tree from given pre-order and in-order Traversals..

#include<queue>
#include<map>
#include<iostream>
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



    void levelOrderTraversal(Node* root) {
        if(root == nullptr) {
            cout<<"Tree does NOT Exists.."<<endl;
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(nullptr);

        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if(temp ==  nullptr) {
                cout<<endl;
                if(!q.empty()) q.push(nullptr);
            }
            else {
                cout<<temp->data<<" ";
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
    }


        // utility function to get correct postion ..
    int getPosition(map<int,int> m, int size, int element) {
        auto i = m.find(element);
        if(i != m.end()) {
            return i->second;
        }
        return -1;
    }

    Node* buildTreeFromPreorderTraversal(int inOrder[], int preOrder[], int size, int &preOrder_index, int inOrder_startIndex, int inOrder_endIndex,map<int,int> &m) {
        if(preOrder_index >= size || inOrder_startIndex > inOrder_endIndex) {
            return nullptr;
        }

        int element = preOrder[preOrder_index++];

        Node* root = new Node(element);

        int pos = getPosition(m,size,element);

        root->left = buildTreeFromPreorderTraversal(inOrder,preOrder,size,preOrder_index,inOrder_startIndex,pos-1,m);
        root->right = buildTreeFromPreorderTraversal(inOrder,preOrder,size,preOrder_index,pos+1,inOrder_endIndex,m);

        return root;
    }

    Node* buildTreeFromPostorderTraversal(int inOrder[], int postOrder[], int &postOrderIndex, int inOrder_startIndex, int inOrder_endIndex, map<int,int> &m, int size) {
        if(postOrderIndex < 0 || inOrder_startIndex > inOrder_endIndex) {
            return nullptr;
        }

        int element = postOrder[postOrderIndex]; 
        postOrderIndex--;

        Node* root = new Node(element);
        
        int pos = getPosition(m,size,element);

        root->right = buildTreeFromPostorderTraversal(inOrder,postOrder,postOrderIndex,pos+1,inOrder_endIndex,m,size);
        root->left = buildTreeFromPostorderTraversal(inOrder,postOrder,postOrderIndex,0,pos-1,m,size);

        return root;

    }


int main() {

    int inOrder[] = {11,12,17,14,13};
    int preOrder[] = {17,11,12,13,14};
    int postOrder[] = {12,11,14,13,17};

    int size = 5;
    int preOrder_index = 0;
    int postOrder_index = size-1;
    int inOrder_startIndex  = 0;
    int inOrder_endIndex = size-1;

    map<int,int> m;
    for(int i=0; i<size; i++) {
        m.insert(make_pair(inOrder[i],i));
    }

    Node* root = buildTreeFromPreorderTraversal(inOrder,preOrder,size,preOrder_index,inOrder_startIndex,inOrder_endIndex,m);

    cout<<"pre order traversal : "<<endl;
    levelOrderTraversal(root);

    cout<<"post order traversal : "<<endl;
    root = buildTreeFromPostorderTraversal(inOrder,postOrder,postOrder_index,inOrder_startIndex,inOrder_endIndex,m,size);

     levelOrderTraversal(root);

    
return 0;
}