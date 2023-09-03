// Reverse linked list in k group

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


Node* reverseListKGroup(Node* &head, int k) {
    if(head == NULL) {
        cout<<"list is EMPTY!"<<endl;
        return NULL;
    }

    int len = listLength(head);
    if(k > len) {
        cout<<"value of K is exceeding.."<<endl;
        return head;
    }

    // K ranges in the list, We can group know!
    // Solving 1 case.
    Node* prev = NULL;
    Node* current = head;
    Node* forward = current->next;
    int count = 0;

    while(count < k) {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        count++;
    }

    // Recursion calls

    if(forward != NULL) { // BASE CASE..
        // we still have Node to Reverse.
        head->next = reverseListKGroup(forward,k);
    }

    // return Head of modified list
    return prev;

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
    Node* head = reverseListKGroup(one,4);
    cout<<endl;
    print(head);

return 0;
}