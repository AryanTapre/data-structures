#include<iostream>
#include<map>
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

// un-sorted version..
void removeDuplicates(Node* &head) {
    if(head == nullptr || head->next == nullptr) {
        cout<<"list is empty or contains only Single Element.."<<endl;
    } 

    map<int,bool> map;
    
    Node* current = head;
    Node* previous = nullptr;
    bool isDuplicates = false;

    while(current != nullptr) {

        if(map.find(current->data) != map.end()) {
            Node* saveCurrent = current;

            if(saveCurrent->next != nullptr) {
                previous->next = saveCurrent->next;
            }
            else {
                cout<<"else()"<<endl;
                previous->next = nullptr;
                delete current;
                return;
            }

            saveCurrent->next = nullptr;
            delete saveCurrent;

            current = previous->next;
            isDuplicates = true;
        }
        else {
            map.insert(make_pair(current->data,true));
            previous = current;
            current = current->next;
        }         
    }
    

    if(!isDuplicates) {
        cout << "no duplicate found there.."<<endl;
        return;
    }

    for(auto i = map.begin(); i != map.end(); i++) {
        cout<<i->first<<endl;
    }
}

int main() {
 
    Node* head = nullptr;
    Node* tail = nullptr;

    insert(10,head,tail);
    insert(10,head,tail);
    insert(10,head,tail);
    insert(190,head,tail);
    insert(5,head,tail);
    insert(10,head,tail);
    insert(6,head,tail);
    insert(50,head,tail);
    insert(190,head,tail);
    

    print(head);
    cout<<endl;
    removeDuplicates(head);
    cout<<endl;
    print(head);



return 0;
}