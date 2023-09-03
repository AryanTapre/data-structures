#include<iostream>
using namespace std;
class Node {

    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

void printList(Node* &head) {
    if(head == nullptr) {
        cout<<"list is empty..";
        return;
    }

    Node* tracker = head;
    while(tracker != nullptr) {
        cout<<tracker->data<<" ";
        tracker = tracker->next;
    }
}

void insertNode(int data,Node* &head, Node* &tail) {
    Node* newNode = new Node(data);

    if(head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

Node* getMiddleNode(Node* &head) {

    Node* slow = head;
    Node* fast = head;
    while(slow!= nullptr && fast != nullptr && fast->next!= nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* &head, Node* &tail, Node* &previous, Node* &current) {
    if(current == nullptr) {
        head = previous;
        return head;
    }

    Node* forward = current->next;
    current->next = previous;
    tail = head;
    reverse(head,tail,current,forward);
}

bool isPalindrome(Node* &head,Node* &tail) {
    
    if(head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* middleNode = getMiddleNode(head);
    Node* previous = nullptr;
    Node* current = middleNode->next;
    
    middleNode->next = reverse(middleNode->next,tail,previous,current);

    Node* start = head;
    Node* end = middleNode->next;

    while(start!= middleNode && end != nullptr) {
        if(start->data != end->data) {
            return false;
        }
        start = start->next;
        end = end->next;
    }

    return true;
}

int main() {
 
    Node* head;
    Node* tail;

    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(2);
    Node* four = new Node(2);
    Node* five = new Node(1);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = nullptr;

    head = one;
    tail = five;

    if(isPalindrome(head,tail)) {
        cout<<"palindrome"<<endl;
    }
    else {
        cout<<"not palindrome.."<<endl;
    }
}