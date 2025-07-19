#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
        Node* prev;
        int data;
        Node* next;
    public:
        Node(int data1, Node* prev1, Node* next1) {
            prev = prev1;
            data = data1;
            next = next1;
        }
        Node(int data1) {
            prev = nullptr;
            data = data1;
            next = nullptr;
        }
        Node(int data1, Node* prev1) {
            prev = prev1;
            data = data1;
            next = nullptr;
        }
};

Node* convertArrayToDLL(vector<int> &arr) {
    if(arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]); 
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], mover);
        mover->next = temp;
        mover = temp;
    }

    return head;

}

void printFront(Node* head) {
    if(head == NULL ) return;
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

Node* addNodeToTail(Node* head, int data) {
    if(head == NULL) {
        Node* temp = new Node(data);
        return temp;
    }

    Node* temp = head;

    while(temp->next != nullptr) {
        temp = temp->next;
    }
    Node * newNode = new Node(data, temp);
    temp->next = newNode;
    return head;
}

Node* addNodeToHead(Node* head, int data) { 
    return new Node(data, nullptr, head);
}

Node* addNodeToKth(Node* head, int data, int k) {
    if(head == NULL && k != 1) return NULL; 
    if(k == 1) {
        Node* newHead = new Node(data);
        newHead->next = head;
        if(head) {
            head->prev = newHead;
        }
        return newHead;
    }
    
    Node* temp = head;
    int cnt = 1;
    while(temp) {
        cnt++;
        if(cnt == k) {
            Node* newNode = new Node(data, temp, temp->next);
            if(temp->next) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* deleteHead(Node* head) {
    if(head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
    return head;
}

Node* deleteTail(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
    return head;
}

Node* deleteKth(Node* head, int k) {
    if(head == NULL) return NULL;
    if(k == 1) {
        Node* temp = head;
        if(head->next) {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }

    int cnt = 1;
    Node*temp = head;
    while(temp) {
        cnt++;
        if(cnt == k) {
            Node* toBeDelete = temp->next;
            if(temp->next->next) {
                temp->next = temp->next->next;
                temp->next->next->prev = temp;
            }
            else {
                temp->next = nullptr;
            }
            delete toBeDelete;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5 , 6};
    // vector<int> arr;
    Node* head = convertArrayToDLL(arr);
    head = deleteKth(head, 1);
    printFront(head);
    return 0;
}

