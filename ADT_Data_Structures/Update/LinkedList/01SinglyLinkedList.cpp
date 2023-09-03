// implementing a singly LINKED-LIST...
/*
    1.  Insert at Beginning.
    2.  Insert at Last.
    3.  Insert in Middle.
*/

#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* link;

        Node() {
            this->data = 0;
            this->link = NULL;
        }

        Node(int data) {
            this->data = data;
            this->link = NULL;
        }
        ~Node() {
            delete link;
        }
};

bool isEmptyList(Node* &head, Node* &tail) {
    if(head == NULL && tail == NULL) {
        return true;
    }
    return false;
}

void printList(Node* &head, Node* &tail) {
    if(isEmptyList(head,tail)) {
        cout<<"LIST IS EMPTY!.."<<endl;
        return;
    }

    Node* tempNode = head;

    while(tempNode!= NULL) {
        cout<<"Data:"<<tempNode->data<<"|AddressOfCurrentNode: "<<tempNode<<"|Next: "<<tempNode->link<<endl;
        
        tempNode = tempNode->link;
    }
}



int listLength(Node* &head) {
    int count = 1;
    Node* track = head;

    while(track != NULL) {
        count++;
        track = track->link;
    }
    
    return count-1;
}

void insertAtBegin(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(isEmptyList(head,tail)) {
            head = newNode;
            tail = newNode; 
            return;
    }
    // When List is NOT Empty..
    newNode->link = head;
    head = newNode;
}

void insertAtEnd(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(isEmptyList(head,tail)) {
        head = newNode;
        tail = newNode;
        return;
    }
    // When list is NOT Empty..
    tail->link = newNode;

}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos) {

    if(isEmptyList(head,tail)) {
        if(pos <= 1) {      // Insert at Beginning If List is Empty..
            insertAtBegin(head,tail,data);
        }
        cout<<"List is EMPTY, Cannot insert node except First Position."<<endl;
        return;
    }
    else {

        // If postion is After Last.
        if(pos <= 1) {
            insertAtBegin(head,tail,data);
        }

        else if(pos > listLength(head)) {
            insertAtEnd(head,tail,data);
        } 
        else {
            // If position is Some Where Between List..
            int i = 1;
            Node* track = head;
            while(i < pos - 1) {
                i++;
                track = track->link;
            }

            //Inserting at POSITION.
            Node* newNode = new Node(data);
            newNode->link = track->link;
            track->link = newNode;
        }
    }
}



void deleteNode(Node* &head, Node* &tail, int pos) {
    if(isEmptyList(head,tail)) {
        cout<<"LISt is EMPTY!"<<endl;
        return;
    }

    if(pos == 1) {
        Node* store = head;
        head = head->link;
        store->link = NULL;
        delete store;
        return;
    }

    if(pos == listLength(head)) {
        Node* track = head;
        while(track->link->link != NULL) {
            track = track->link;
        }

        Node* store = track->link;
        track->link = NULL;
        delete store;
        return;
    }

            int i = 1;
            Node* track = head;
            while(i < pos - 1) {
                track = track->link;
                i++;
            }

            Node* connectingNode = track->link->link;
            Node* store = track->link;

            store->link = NULL;
            track->link = connectingNode;
            delete store;
}

int searchNode(Node* &head, Node* &tail, int data) {
    
    if(isEmptyList(head,tail)) {
        cout<<"List is EMPTY!";
        exit(0);
    }

    // If LIST is NOT EMPTY!...
    int positionCount = 0;
    Node* track = head;

    while(track != NULL) {
        ++positionCount;
        if(track->data == data) {
            return positionCount;
        }
        track = track->link;
    }

    return -1;
}


void reverseList(Node* &prev ,Node* &current, Node* &head, Node* &tail) {
        //BASE CASE..
        if(current == NULL) {
            head = prev;
            return;
        }

        Node* next = current->link;
        current->link = prev;
         tail = head;
        reverseList(current,next,head,tail);
       
}


void reverseUsingLoop(Node* &head, Node* &tail) {
    Node* prev = NULL;
    Node* current = head;

    while(current != NULL) {

        Node* next = current->link;
        current->link = prev;
        tail = head;

        prev = current;
        current = next; 
    }
    head = prev;
}

int main() {

    
    Node* HEAD = NULL;
    Node* TAIL = NULL;

    insertAtBegin(HEAD,TAIL,12);
    insertAtBegin(HEAD,TAIL,100);
    insertAtBegin(HEAD,TAIL,78);
    insertAtBegin(HEAD,TAIL,98);
    insertAtBegin(HEAD,TAIL,89);
    insertAtBegin(HEAD,TAIL,23);
    insertAtBegin(HEAD,TAIL,0);
    insertAtBegin(HEAD,TAIL,55);
    
    
    printList(HEAD,TAIL);

    Node* prev = NULL;
    Node* current = HEAD;
     //reverseList(prev,current,HEAD,TAIL);
    reverseUsingLoop(HEAD,TAIL);
    cout<<endl<<endl;

    printList(HEAD,TAIL);

    // cout<<"found at : "<<searchNode(HEAD,TAIL,10);
    // cout<<endl;

    cout<<"Head:"<<HEAD->data<<endl;
    cout<<"Tail:"<<TAIL->data<<endl;
    
}