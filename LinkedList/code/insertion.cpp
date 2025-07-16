#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct Node {
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1) {
    data = data1;
    next = next1;
  }
  Node(int data1) {
    data = data1;
    next = nullptr;
  }
};

Node *convertArraToLL(vector<int> &arr) {
  if (arr.size() == 0)
    return NULL;
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void print(Node *head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

Node *insertInHead(Node *head, int element) {
  Node *newHead = new Node(element, head);
  return newHead;
}

Node *insertInTail(Node *head, int element) {
  Node *temp = head;
  Node *newTail = new Node(element);
  if (head == NULL)
    return newTail;

  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newTail;
  return head;
}

Node *insertInKth(Node *head, int element, int k) {
  if (head == NULL)
    return NULL;
  Node *newElement = new Node(element);
  if (k == 1) {
    newElement->next = head;
    return newElement;
  }
  Node *temp = head;
  int cnt = 0;
  Node *prev = NULL;
  while (temp) {
    cnt++;
    if (cnt == k) {
      newElement->next = prev->next;
      prev->next = newElement;
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  if (cnt + 1 == k) {
    prev->next = newElement;
  }
  return head;
}

Node *insertBeforeELe(Node *head, int newEle, int ele) {
  if (head == NULL)
    return NULL;

  Node *temp = head;
  Node *insertingEle = new Node(newEle);
  if (temp->data == ele) {
    insertingEle->next = temp;
    head = insertingEle;
    return head;
  }
  Node *prev = NULL;
  while (temp) {
    if (temp->data == ele) {
      insertingEle->next = temp;
      prev->next = insertingEle;
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

int main() {

  vector<int> arr = {1, 2, 3, 4, 5, 6};
  // vector<int> arr;
  Node *head = convertArraToLL(arr);
  head = insertBeforeELe(head, 30, 9);
  print(head);
  return 0;
}
