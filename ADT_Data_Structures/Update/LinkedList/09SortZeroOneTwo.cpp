// Sorting zero's , One's and Two's

#include<map>
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

void sort(Node* &head) {
    if(head == nullptr) {
        cout<<"list is Empty.."<<endl;
    }
    else if(head->next == nullptr) {
        cout<<"list is already sorted.."<<endl;
    }

    Node* current = head;
    map<int,int> store;
    map<int,int> :: iterator it;

    while(current != nullptr) {

        it = store.find(current->data);

        if(it == store.end()) {
            store.insert(make_pair(current->data,1));
        }
        else {
            it->second++;
        }
        current = current->next;
    }

    current = head;
    it = store.find(0);
    int zero = it->second;
    int one = (++it)->second;
    int two = (++it)->second;

    while(zero--) {
        current->data = 0;
        current = current->next;
    } 

    while(one--) {
        current->data = 1;
        current = current->next;
    } 

    while(two--) {
        current->data = 2;
        current = current->next;
    } 
}


void sortVersion2(Node* &head) {

    if(head == nullptr) {
        cout <<"list is empty.."<<endl;
    }
    else if(head->next == nullptr) {
        cout<<"list is already Sorted.."<<endl;
    }

    // list is > 1
    Node* zeroHead = nullptr;
    Node* zeroTail = nullptr;

    Node* oneHead = nullptr;
    Node* oneTail = nullptr;

    Node* twoHead = nullptr;
    Node* twoTail = nullptr;

    Node* current = head;
    while(current != nullptr) {

        if(current->data == 0) {
            insert(current->data,zeroHead,zeroTail);
        }
        else if(current->data == 1) {
            insert(current->data,oneHead,oneTail);
        }
        else {
            // current->data == 2
            insert(current->data,twoHead,twoTail);
        }

        current = current->next;
    }

    
    // Linking Logic..

    if(zeroHead != nullptr) {

        if(oneHead != nullptr) {

            zeroTail->next = oneHead;
            if(twoHead != nullptr) {
                oneTail->next = twoHead;
            }
           
        }
        else {

            if(twoHead != nullptr) {
                zeroTail->next = twoHead;
            }
            
        }
        head = zeroHead;
    }
    else {

        if(oneHead != nullptr) {

            if(twoHead != nullptr) {
                oneTail->next = twoHead;
            }
            head = oneHead;
        }
        else {
            head = twoHead;
        }
    }
    
}

int main() {
 
    Node* head = nullptr;
    Node* tail = nullptr;

    insert(1,head,tail);
    insert(2,head,tail);
    insert(1,head,tail);
    insert(1,head,tail);
    insert(1,head,tail);
    insert(1,head,tail);
    insert(2,head,tail);
    insert(2,head,tail);
    insert(1,head,tail);

    // print(head);
    // sort(head);
    // cout<<endl;
    // print(head);

    print(head);
    cout<<endl<<endl;

    sortVersion2(head);
    cout<<endl;
    print(head);
    
return 0;
}