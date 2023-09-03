// Leetcode : 113

#include<vector>
#include<queue>
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


void solve(Node* root, int &targetSum, int &currSum, vector<int> &path, vector<vector<int>> &ans) {
    // base case..
    if(root == nullptr) 
        return;

    if(root->left == nullptr && root->right == nullptr) {
        path.push_back(root->data);
        currSum += root->data;

        if(currSum == targetSum) {
            ans.push_back(path);
        }

        //backTracking..
        path.pop_back();
        currSum -= root->data;
        return;
    }

    // Normal case..
    path.push_back(root->data);
    currSum += root->data;

    // left call..
    solve(root->left,targetSum,currSum,path,ans);
    //right call
    solve(root->right,targetSum,currSum,path,ans);

    // backtracking..
    path.pop_back();
    currSum -= root->data;

}

vector<vector<int> > pathSum(Node* root, int targetSum) {
    vector<vector<int> > ans; 
    vector<int> path;
    int sum = 0;

    solve(root,targetSum, sum,path,ans);
    return ans;
}

int main() {
 
    vector<int> data = {5,4,11,7,-1,-1,2,-1,8,13,-1,-1,4,5,-1,-1,1,-1,-1};
  
    int i = 0;
    Node* root = buildTree(data,i);

    levelOrderTraversal(root);

    // vector<vector<int> > finalAns = pathSum(root,22);

    // for(auto &&i : finalAns) {
    //     for(auto &&j : i) {
    //         cout << j<<" ";
    //     }
    //     cout<<endl;
    // }

return 0;
}