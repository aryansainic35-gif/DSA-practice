// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };
// bool detectCycle(Node* head) {  // Detect Cycle
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     head->next->next->next->next->next = head->next; //Creating Cycle

//     if(detectCycle(head)) {
//         cout << "Cycle detected";
//     } else {
//         cout << "No cycle";
//     }
//     cout << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

bool isCycle = false;
bool removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            isCycle = true;
            break;
        }
    }
    if(!isCycle) {
        return false;
    }
    slow = head;
    Node* prev = NULL;
    while(slow != fast) {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
}
void printLL(Node* head) {
    while(head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    
    head->next->next->next->next->next = head->next;

    
    if(removeCycle(head)) {
        cout << "Cycle removed successfully" << endl;
    } else {
        cout << "No cycle found" << endl;
    }

    printLL(head);

    return 0;
}