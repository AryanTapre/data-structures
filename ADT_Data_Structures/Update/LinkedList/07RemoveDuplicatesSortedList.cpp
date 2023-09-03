// Remove Duplicates From a Sorted Linked List..
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

void removeDuplicates(Node* &head) {
        if(head == nullptr || head->next == nullptr) {
            cout<<"list is empty or consist of ONE element.."<<endl;
            return;
        }

        Node* current = head;
        bool isDuplicate = false;

        while(current != nullptr) {
            if((current->next != nullptr) && (current->data == current->next->data)) {
                Node* saveNextNode = current->next;
                current->next = saveNextNode->next;
                saveNextNode->next = nullptr;
                delete saveNextNode;
                isDuplicate = true;
            }
            else {
                current = current->next;
               
            }
        }

        if(!isDuplicate) {
            cout<<"no Duplicate found."<<endl;
        }
        else {
            cout <<"Duplicates Removed.."<<endl;
        }
}

int main() {
 
    Node* head = nullptr;
    Node* tail = nullptr;

    insert(10,head,tail);
    insert(11,head,tail);
    insert(12,head,tail);
    insert(13,head,tail);
    insert(14,head,tail);
    insert(115,head,tail);
    insert(205,head,tail);
    insert(405,head,tail);
    insert(4056,head,tail);

    print(head);
    removeDuplicates(head);
    cout<<endl;
    print(head);

return 0;
}

