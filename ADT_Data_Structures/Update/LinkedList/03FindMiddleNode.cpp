// IMPORTANT:
//  Approach :   
//              Slow and Fast| Tortoise algorithm | Two pointer approach..

#include<iostream>
using namespace std;
 
class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int listLength(Node* &head) {
    int count = 0;
    Node* track = head;

    while(track != NULL) {
        count++;
        track = track->next;
    }
    
    return count;
}


Node* getMiddleNode(Node* head) {
    // list is empty!
    if(head->next == NULL) {
        cout<<"list is empty."<<endl;
        return head;
    }

    // // one node in list
    if(listLength(head) == 1) {
        return head;
    }

    // list > 1 in size
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast!= NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int main() {
 
    Node* one = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);
    Node* six = new Node(60);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    print(one);

    // Node* middle = getMiddleNode(one);
  
    // cout<<endl<<"middle node is:"<<middle->data<<endl;

    cout<<"Length:"<<listLength(one);


return (0);
}