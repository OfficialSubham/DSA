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

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node *&head)
{

    if(head == NULL || head->next == nullptr) {
        delete head;
        return NULL;
    }
    // while (temp)
    // { 
    //     if (temp->next->next == nullptr)
    //     {
    //         temp->next = nullptr;
    //         return head;
    //     }
    //    temp = temp->next;
    // }
    Node *temp = head;
    while(temp->next->next != nullptr) {
        temp = temp->next;
    }
    Node* check = temp->next;
    cout << check->data << endl; 
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *convertArrToLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node* deleteKthElement(Node* head, int ele) {
    if(head == NULL) return head;
    if(ele == 1) {
        Node* currentTemp = head;
        head = head->next;
        delete currentTemp;
        return head;
    } 
    int cnt = 0;
    Node* temp = head;
    Node* previous = NULL;
    while(temp) {
        cnt++;
        if(cnt == ele) {
            previous->next = previous->next->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteThisNum(Node* head, int num) {
    if(head == NULL || head->next == nullptr) return NULL;
    Node* temp = head;
    if(temp->data == num) {
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = NULL;
    while(temp) {
        if(temp->data == num) {
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *head = convertArrToLL(arr);
    head = deleteThisNum(head, 4);
    print(head);

    return 0;
}