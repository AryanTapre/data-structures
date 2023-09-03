// IMPLEMENTING "Doubly Linked List"..!

#include<iostream>
using namespace std;
 
class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node() {
            this->data = 0;
            this->next = nullptr;
            this->prev = nullptr;
        }
        Node(int data) {
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

bool isEmptyList(Node* &head, Node* &tail) {
    if(head == nullptr && tail == nullptr) return true;
    return false;
}

void printList(Node* &head, Node* &tail) {
    if(isEmptyList(head,tail)) {
        cout<<"LIST IS EMPTY!."<<endl;
        return;
    }

    Node* track = head;
    while(track != NULL) {
        cout<<"Data:"<<track->data<<"|AddressOfCurrentNode: "<<track<<"|Next: "<<track->next<<"|Prev: "<<track->prev<<endl;
        track = track->next;
    }
}


int listLength(Node* &head) {
    int count = 1;
    Node* track = head;

    while(track != NULL) {
        count++;
        track = track->next;
    }
    
    return count-1;
}


int searchNode(Node* &head, Node* &tail, int data) {

    if(isEmptyList(head,tail)) return -1;

    int position = 1;
    bool found = false;
    Node* track = head;

    while(track != nullptr) {
        if(track->data != data) ++position;
        else found = true;

        if(found) break;
        track = track->next;
    }

    if(!found) return -1;
    else return position;
}

void insertAtBegin(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(isEmptyList(head,tail)) {
        head = newNode;
        tail = newNode;
        return; 
    }

    // If List is NON-EMPTY.
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if(isEmptyList(head,tail)) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;    
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos) {
    if(isEmptyList(head,tail)) {
        // Position will NOT matters.
        insertAtBegin(head,tail,data);
    }
    else {
        
        if(pos > listLength(head)) {
            insertAtEnd(head,tail,data);
        }
        else {
            // Insert in the Middle..

            if(pos == 1) {
                insertAtBegin(head,tail,data);
                return;
            }

            int index = 1;
            Node* track = head;
            while(index < pos - 1) {
                index++;
                track = track->next;
            }

            Node* newNode = new Node(data);
            Node* connectingNode = track->next;
            newNode->prev = track;
            track->next = newNode;
            newNode->next = connectingNode;
            connectingNode->prev = newNode;
            
        }
    }
}


void deleteNode(Node* &head, Node* &tail, int data) {


    // Check Whether List is EMPTY or NOT!.
    if(isEmptyList(head,tail)) { cout<<"List is Empty!"<<endl; return; }


    int position = searchNode(head,tail,data);

    // If Data is NOT Avaliable in List!.
    if(position == -1) { cout<<"Data NOT Found!"<<endl; return;};

    // DATA IS FOUND!..

    // If size of list is ONE.
    if(listLength(head) == 1) {
        delete head;
        delete tail;
        head = nullptr;
        tail = nullptr;
        return;
    }

    Node* temp;
    int i = 1;
    // If Size is Greater than ONE.

    if(position == 1) { // data found at position 1
        temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        return;
    }

    if(position == listLength(head)) {
        temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return;
    }

    // If Position is SomeWhere Middle in the LIST.
    temp = head;
    while(i < position - 1) {
        temp = temp->next;
        ++i;
    }

    Node* deletingNode = temp->next;
    Node* connectingNode = temp->next->next;
    temp->next = connectingNode;
    connectingNode->prev = temp;
    deletingNode->next = nullptr;
    deletingNode->prev = nullptr;
    delete deletingNode;

}

void reverseList(Node* &prev, Node* &current, Node* &head, Node* &tail) {
    // BASE CASE:
        if(current == nullptr) {
            head = prev;
            return;
        }

        Node* forward = current->next;
        current->next = prev;
        current->prev = forward;

        tail = head; // maintaining TAIL Pointer..

        reverseList(current,forward,head,tail);
}


int main() {
 
    Node* HEAD = nullptr;
    Node* TAIL = nullptr;

    insertAtBegin(HEAD,TAIL,10);
    insertAtBegin(HEAD,TAIL,20);
    insertAtBegin(HEAD,TAIL,30);
    insertAtBegin(HEAD,TAIL,40);
    insertAtBegin(HEAD,TAIL,50);
    insertAtEnd(HEAD,TAIL,101);

    // printList(HEAD,TAIL);
    // cout<<endl;

    // cout<<"Length:"<<listLength(HEAD);

    
    // insertAtPosition(HEAD,TAIL,20,1);
    // insertAtPosition(HEAD,TAIL,56,2);
    // printList(HEAD,TAIL);

    // cout<<endl<<endl;
    // cout<<"Found at : "<<searchNode(HEAD,TAIL,1010);

    // deleteNode(HEAD,TAIL,10);
    // cout<<endl<<"After Deleting :->"<<endl;
    // printList(HEAD,TAIL);


    // cout<<endl<<"current HEAD: "<<HEAD<<" Tail: "<<TAIL<<endl;

    printList(HEAD,TAIL);
    cout<<endl;
    
    Node* prev = nullptr;
    Node* current = HEAD;
    reverseList(prev,current,HEAD,TAIL);
    printList(HEAD,TAIL);

    

return (0);
}