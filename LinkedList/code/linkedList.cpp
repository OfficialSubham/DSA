#include <bits/stdc++.h>
using namespace std;

class Node
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
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int findLengthOfLL(Node* head) {
    Node * temp = head;
    int length = 0;
    while(temp) {
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Node* y = new  Node(12, nullptr);

    // cout << y->data << endl;

    Node *head = convertArr2LL(arr);
    // while (head->next != nullptr)
    // {
    //     cout << head->data << endl;
    //     head = head->next;
    // }
    Node *temp = head;
    int length = findLengthOfLL(temp);
    cout << length << endl;

    return 0;
}