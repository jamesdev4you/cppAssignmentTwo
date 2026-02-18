// Linked Lists allow users to store data in non-contiguous memory locations.

//The start of each linked list in cpp is known as the head.

// Singly Linked Lists are the simplest form. The node contains two members: data and a next pointer.
// The last node points to NULL.
// They are a linear data structure.

#include <iostream>
#include <list>
using namespace std;

// To rep a singly list we must first declare a Node type that represents a single node.
// This class will be used in our linkedlist class to create nodes.
class Node {
    public:
    int data;
    Node *next;

    // Default NODE. By deault, a node will have value 0.
    Node() {
        data = 0;
        next = NULL;
    }

    // Customizable NODE
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Then define the class that contains the pointer TO the HEAD OF THE LINKED LIST. 
// This is the start of the linked list. By default, its head is pointed to NULL.
class LinkedList {
    Node* head;
    public:

        // Default Linked List!
        LinkedList(){
            head = NULL;
        }

        // Function to insert node at the start of the linked list (starting a linked list)
        // Inserts a new Node class as the head of the linked list.
        void insertAtHead(int data){
            Node *newNode = new Node(data);

            // Assign to head of the list if empty.
            // Checks if linked list is empty. IF it is, the newNode becomes the head of the list.
            if(head == NULL){
                head = newNode;
                return;
            };

            //Insert the newly created linked list at the head.
            //This sets newNode next pointer, to the current node
            newNode->next = this->head;
            // This sets the new node as the head.
            this->head = newNode;

        }

        void print(){
            Node *temp = head;

            // Check for empty list
            if(head == NULL){
                cout << "List empty" << endl;
                return;
            }

            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
        }

        void reverseList(){
            Node *curr = head;
            Node *prev = NULL;
            Node *next = NULL;

            while(curr != NULL){
                next = curr->next;    // store next
                curr->next = prev;    // reverse link
                prev = curr;
                curr = next;          // move curr forward
            }

            head = prev;
        }

};



int main(){
    LinkedList list;

    list.insertAtHead(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    cout << "Elements of the list are: ";

    list.print();
    cout << endl;
    list.reverseList();
    list.print();
    cout << endl;

    return 0;
}
