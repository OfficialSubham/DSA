#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(Node *head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

Node* removeHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* convertArrToLL(vector<int> arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;

}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node* head = convertArrToLL(arr);
    
    head = removeHead(head);
    print(head);

    return 0;
}