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

bool detectLoop(Node* &head) {

    if(head == nullptr || head->next == nullptr) {
        return false;
    }

    map<Node*,bool> storage;
    Node* track = head;
    while (track != nullptr)
    {
        if(!storage.count(track)) {
            storage.insert(make_pair(track,true));
        }
        else {
            return true;
        }

        track = track->next;
    }
    return false;
}

bool detectLoopFloydVersion(Node* &head) {
    if(head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!= nullptr && fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast) {
            return true;
        }
    }
    return false;
}


void printList(Node* &head) {

    if(detectLoopFloydVersion(head)) {
        cout << "can't print , Loop detected."<<endl;
        return;
    }

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

// Job is to find starting Point of the Loop in LL..
Node* leadingLoop(Node* &head) {
    if(head == nullptr && head->next == nullptr) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    bool isLoop = false;

    while(slow!= nullptr && fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast) {
            isLoop = true;
            break;
        }
    }

    if(!isLoop) {
        cout << "Loop NOT detected.."<<endl;
        return NULL;
    } 
    else {

        slow = head;
        while (slow != fast) {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
}

void removeLoop(Node* &head,Node* &tail) {
    if(head == nullptr && head->next == nullptr) {
        return;
    }

    Node* slow = head;
    Node* fast = head;
    bool isLoop = false; 

    while(slow!= nullptr && fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast) {
            isLoop = true;
            break;
        }
    }

    if(!isLoop) {
        cout <<"Ops!, No Loop found."<<endl;
        return;
    }

    // In CASE of Circular List..
    if(tail->next == head) {
        cout << "it an Circular LinkedList, NOT considering it a LOOP!.";
        return;
    }
   
    



    Node* previousNode = nullptr;
    slow = head;
    while(slow != fast) {
        previousNode = fast;
        fast = fast->next;
        slow = slow->next;
    }

    // break the loop..
    cout<<"previous node data: "<<previousNode->data<<endl;
    previousNode->next = nullptr;
    previousNode = nullptr;
    delete previousNode;
}

int main() {
 

    Node* one = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = one;

    Node* head = one;
    Node* tail = five;


    
    cout<<detectLoopFloydVersion(head)<<endl;

    Node* node = leadingLoop(head);
    cout<<node->data<<endl;

    removeLoop(head,tail);
    printList(head);

    

return 0;
}