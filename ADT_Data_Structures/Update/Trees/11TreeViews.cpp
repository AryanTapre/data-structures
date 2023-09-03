#include<iostream>
#include<queue>
#include<vector>
#include<map>
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


Node * buildTreeHelper(int &i,vector<int> &data) {

     if(data.at(i)  == -1) {
        return nullptr;
    }
    
    Node* root = new Node(data.at(i));

    root->left = buildTreeHelper(++i,data);
 
    root->right = buildTreeHelper(++i,data);
    
    return root;
}

Node* buildTree() {
    vector<int> data;
    int x;
        cout<<"Enter the data : "<<endl;
        while(cin>>x) {
            data.push_back(x);
        }
       
        int i = 0;
    return buildTreeHelper(i,data);

}

// Node* buildTree(vector<int> &data, int &i) {
//     if(data.at(i)  == -1) {
//         return nullptr;
//     }
    
//     Node* root = new Node(data.at(i));
//     i++;
//     root->left = buildTree(data,i);
//     i++;
//     root->right = buildTree(data,i);
    
//     return root;
// }

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

//FIXME: TOP VIEW..
void topView(Node* root) {
    queue<pair<Node*,int>> q;
    map<int,int> m;
    int horizontalDirection = 0;

    if(root == nullptr) {
        return;
    }    

    q.push(make_pair(root,horizontalDirection));

    while(!q.empty()) {
       pair<Node*,int> frontNode = q.front();
       q.pop();

       Node* temp = frontNode.first;
       horizontalDirection = frontNode.second;

       m.insert(make_pair(horizontalDirection,temp->data));

       if(temp->left) {
        q.push(make_pair(temp->left,horizontalDirection-1));
       }
       if(temp->right) {
            q.push(make_pair(temp->right,horizontalDirection+1));
       }
    }
    

    // printing the map..
    for(auto i : m) {
        cout<<i.first<<" ->"<<i.second<<endl;
    }
}

// FIXME: BOTTOM VIEW
void bottomView(Node* root) {

    queue<pair<Node*,int>> q;
    map<int,int> m;
    int horizontalDirection = 0;

    if(root == nullptr) {
        return;
    }    

    q.push(make_pair(root,horizontalDirection));

    while(!q.empty()) {
       pair<Node*,int> frontNode = q.front();
       q.pop();

       Node* temp = frontNode.first;
       horizontalDirection = frontNode.second;

        // TODO: updating map 
       m[horizontalDirection] = temp->data;

       if(temp->left) {
        q.push(make_pair(temp->left,horizontalDirection-1));
       }
       if(temp->right) {
            q.push(make_pair(temp->right,horizontalDirection+1));
       }
    }
    

    // printing the map..
    for(auto i : m) {
        cout<<i.first<<" ->"<<i.second<<endl;
    }
}

// FIXME: LEFT VIEW
void leftView_levelOrderTraversal(Node* root) {
    queue<Node*> q;
    
    q.push(root);
    q.push(nullptr);

    Node* temp = q.front();
    q.pop();

   cout<<temp->data<<" ";

    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);

    while(!q.empty()) {
        temp = q.front();
        q.pop();

        if(temp == nullptr) {
            //  the ans
           cout<<q.front()->data <<" ";

            if(!q.empty()) {
                q.push(nullptr);
            }
        }
        else {
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void leftView_map(Node* root, int level, map<int, int> &m)  {
    if(root == nullptr) {
        return;
    }
    m.insert(make_pair(level,root->data));

    leftView_map(root->left,++level,m);
    leftView_map(root->right,level,m);
}

void rightView_map(Node* root, int level, map<int, int> &m)  {
    if(root == nullptr) {
        return;
    }
    m.insert(make_pair(level,root->data));

    level++;
    leftView_map(root->right,level,m);
    leftView_map(root->left,level,m);
}


void leftView_vector(Node* root, int level, vector<int> &ans) {
    if(root == nullptr) {
        return;
    }

    if(ans.size() == level) {
        ans.push_back(root->data);
    }

    // left call
    level++;
    leftView_vector(root->left,level,ans);
    
    // right call
    leftView_vector(root->right,level,ans); 
}

void rightView_vector(Node* root, int level, vector<int> &ans) {
    if(root == nullptr) {
        return;
    }

    if(ans.size() == level) {
        ans.push_back(root->data);
    }

     
    // right call
        level++;
    leftView_vector(root->right,level,ans); 

    // left call

    leftView_vector(root->left,level,ans);
   
}


void leftBoundaryView(Node* root) {
    if(root == nullptr) {
        return;
    }

    if(root->left == nullptr && root->right == nullptr) {
        return;
    }

    cout<<root->data<<" ";

    if(root->left) {
        leftBoundaryView(root->left);
    }
    else {
        leftBoundaryView(root->right);
    }
}

void leafBoundaryView(Node* root) {
    if(root == nullptr) {
        return;
    }

    if(root->left == nullptr && root->right == nullptr) {
        cout << root->data <<" ";
    }

    leafBoundaryView(root->left);
    leafBoundaryView(root->right);
}


void rightBoundaryView(Node* root) {
    if(root == nullptr) {
        return;
    }

    if(root->left == nullptr && root->right == nullptr) {
        return;
    }

    if(root->right) {
        rightBoundaryView(root->right);
    }
    else {
        rightBoundaryView(root->left);
    }

    // printing the node's data..

    cout<<root->data<<" ";
}

void boundaryTraversal(Node* root) {
    cout<<root->data<<" ";

    leftBoundaryView(root->left);

    leafBoundaryView(root);

    rightBoundaryView(root->right);
}



int main() {
 
    // vector<int> data = {10,20,30,-1,-1,40,60,-1,-1,-1,80,50,-1,70,-1,-1,90,-1,-1};
    // int i = 0;

    // Node* root = buildTree(data,i);
    // levelOrderTraversal(root);

  
    // cout<<"printing the top view : "<<endl;
    // topView(root);

   
    // cout<<endl<<"printing the bottom view : "<<endl;
    // bottomView(root);

    Node* root = buildTree();


      // FIXME: TOP VIEW
    cout<<endl<<"Printing Top View : "<<endl;
    topView(root);

     // FIXME: BOTTOM VIEW    
    cout<<endl<<"Printing bottom View : "<<endl;
    bottomView(root);
    
    // FIXME: LEFT VIEW
    cout<<endl<<"printing Left View : "<<endl;
    // leftView_levelOrderTraversal(root);
     map<int, int> m;

    leftView_map(root,0,m);
        for(auto i : m) {
        cout<<i.first<<" ->"<<i.second<<endl;
        }
    cout<<endl;

    // vector<int> ans;
    // leftView_vector(root,0,ans);
    // for(auto i : ans) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // FIXME: RIGHT VIEW..
   cout<<endl<<"printing Right view : "<<endl;
    vector<int> ans;
    rightView_vector(root,0,ans);
    
    for(auto i : ans) {
        cout<<i<<" ";
    }
    cout<<endl;

    //  rightView_map(root,0,m);
    //     for(auto i : m) {
    //     cout<<i.first<<" ->"<<i.second<<endl;
    //     }
    // cout<<endl;

    cout<<endl<<"Boundary Traversal : "<<endl;
    boundaryTraversal(root);







return 0;
}