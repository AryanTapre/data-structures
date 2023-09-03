// Adding Two Linked List..

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

void print(Node* head) {
    if(head == nullptr) {
        return;
    }

    Node* track = head;
    while(track != nullptr) {
        cout<<track->data<<" ";
        track = track->next;
    }
}

void insert(int data,Node* &head,Node* &tail) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}


void reverse(Node* &head, Node* &tail, Node* &current, Node* &previous) {
    if(current == nullptr) {
        head = previous;
        return;
    }

    Node* forward = current->next;
    current->next = previous;
    tail = head;
    reverse(head,tail,forward,current);
}



Node* add(Node* &oneHead, Node* &twoHead, Node* &oneTail, Node* &twoTail) {
    if(oneHead == nullptr || twoHead == nullptr) {
        cout<<"either one of the list or both are empty."<<endl;
    }

     

    // reverse both List..
    Node* current = oneHead;
    Node* previous = nullptr;
    reverse(oneHead,oneTail,current,previous);
    current = twoHead;
    previous = nullptr;
    reverse(twoHead,twoTail,current,previous);
 
    Node* oneTrack = oneHead;
    Node* twoTrack = twoHead;
    Node* resultHead = nullptr;
    Node* resultTail = nullptr;

    cout<<"reverse.."<<endl;
    print(oneHead); cout<<endl;
    print(twoHead); cout<<endl;

    // perform addition
    // if both are same length..
   
    int sum = 0,carry=0 ,digit;
    int x = 0;
    while(oneTrack != nullptr && twoTrack != nullptr) {
        cout<<"zero"<<endl;
        sum = oneTrack->data + twoTrack->data + carry;
        digit = sum % 10;
        carry = sum / 10;
        insert(digit,resultHead,resultTail);
        
        oneTrack = oneTrack->next;
        twoTrack = twoTrack->next;
        
    }



    // oneHead < twoHead.
    while(twoTrack != nullptr) {
        cout<<"one"<<endl;
        sum = 0 + twoTrack->data + carry;
        digit = sum % 10;
        carry = sum / 10;
        insert(digit,resultHead,resultTail);

        twoTrack = twoTrack->next;
    }


    // oneHead > twoHead.

    while(oneTrack != nullptr) {
        cout<<"two"<<endl;
        sum = oneTrack->data + 0 + carry;
        digit = sum % 10;
        carry = sum / 10;
        insert(digit,resultHead,resultTail);

        oneTrack = oneTrack->next;
    }


    // if carry is still left..

    while(carry--) {
        cout<<"two"<<endl;
        sum = 0 + 0 + carry;
        digit = sum % 10;
        carry = sum / 10;
        insert(digit,resultHead,resultTail);
    }


    
    current = resultHead;
    previous = nullptr;
    reverse(resultHead,resultTail,current,previous);
    
    return resultHead;

}

int main() {

    Node* oneHead = nullptr;
    Node* oneTail = nullptr;
    Node* twoHead = nullptr;
    Node* twoTail = nullptr;

    insert(1,oneHead,oneTail);
    insert(1,oneHead,oneTail);
    insert(0,oneHead,oneTail);
       
    insert(8,twoHead,twoTail);
    insert(7,twoHead,twoTail);
    insert(9,twoHead,twoTail);

    print(oneHead);
    print(twoHead);

    Node* result = add(oneHead,twoHead,oneTail,twoTail);
    cout<<endl<<"result"<<endl;
    print(result);

return 0;
}