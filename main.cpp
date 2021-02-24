#include <iostream>


class Node {
  public: 
    int Value;
    Node* Next; 
};

void printList(Node*n) {
  while(n != NULL) { 
    std::cout << n->Value << std::endl; 
    n = n->Next; 
  }
}

int main() {
  Node* head = new Node();
  Node* second = new Node(); 
  Node* third = new Node(); 

  head -> Value = 1; 
  second -> Value = 2; 
  third -> Value = 3; 
  head -> Next = second; 
  second -> Next = third; 
  third -> Next = NULL; 

  printList(head);
}