// 🔹 1. Reverse Linked List//Leet Code #206
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* reverseList(node* head) {
//         node* prev = NULL;
//         node* curr = head;

//         while (curr) {
//             node* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

// void printList(node* head) {
//     while (head) {
//         cout << head->val << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.reverseList(head);

//     printList(head);
//     return 0;
// }

// 🔹 2. Middle of Linked List // leet code #876

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* middlenode(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);

//     Solution obj;
//     node* mid = obj.middlenode(head);

//     cout << "Middle: " << mid->val;
//     return 0;
// }


// 🔹 3. Remove Duplicates from Sorted List leet code #83


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* deleteDuplicates(node* head) {
//         node* curr = head;

//         while (curr && curr->next) {
//             if (curr->val == curr->next->val)
//                 curr->next = curr->next->next;
//             else
//                 curr = curr->next;
//         }
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(1);
//     head->next->next = new node(2);

//     Solution obj;
//     head = obj.deleteDuplicates(head);

//     print(head);
//     return 0;
// }


// 🔹 4. Merge Two Sorted Lists leetcode #21


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* mergeTwoLists(node* l1, node* l2) {
//         node dummy(0);
//         node* tail = &dummy;

//         while (l1 && l2) {
//             if (l1->val < l2->val) {
//                 tail->next = l1;
//                 l1 = l1->next;
//             } else {
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
//             tail = tail->next;
//         }

//         if (l1) tail->next = l1;
//         if (l2) tail->next = l2;

//         return dummy.next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(3);

//     node* l2 = new node(2);
//     l2->next = new node(4);

//     Solution obj;
//     node* result = obj.mergeTwoLists(l1, l2);

//     print(result);
//     return 0;
// }


// 🔹 5. Linked List Cycle leetcode #141

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool hasCycle(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) return true;
//         }
//         return false;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = head; // create cycle

//     Solution obj;
//   if (obj.hasCycle(head)) {
//         cout << "Cycle Found";
//     } else {
//         cout << "No Cycle";
//     }
//     return 0;
// }

// 🔹 6. HACKER-RANK:Compare Two Linked Lists
// Given two linked lists, determine whether they are identical.
// Two lists are identical if they have the same data and same order.

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool compareLists(node* head1, node* head2) {
//         while (head1 && head2) {
//             if (head1->data != head2->data)
//                 return false;

//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         return (head1 == NULL && head2 == NULL);
//     }
// };

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(2);

//     node* l2 = new node(1);
//     l2->next = new node(2);

//     Solution obj;
//     if (obj.compareLists(l1,l2)) {
//         cout << "Identical";
//     } else {
//         cout << "Not Identical";
//     }
//     return 0;
// }

// 7.🔹 1. Delete node in a Linked List leetcode -#237


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     void deletenode(node* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(4);
//     head->next = new node(5);
//     head->next->next = new node(1);
//     head->next->next->next = new node(9);

//     Solution obj;
//     obj.deletenode(head->next); 

//     print(head);
//     return 0;
// }


// 🔹 8. Palindrome Linked List leetcode #234


// #include <iostream>
// #include <vector>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool isPalindrome(node* head) {
//         vector<int> arr;

//         while (head) {
//             arr.push_back(head->val);
//             head = head->next;
//         }

//         int i = 0, j = arr.size() - 1;
//         while (i < j) {
//             if (arr[i] != arr[j])
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(2);
//     head->next->next->next = new node(1);

//     Solution obj;
//   if (obj.isPalindrome(head)) {
//         cout << "Given lis is a Palindrome";
//     } else {
//         cout << "Given list is not a Not Palindrome";
//     }
//     return 0;
// }


// 🔹 9. Remove Nth node From End leetcode#19

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* removeNthFromEnd(node* head, int n) {
//         int size = 0;
//         node* temp = head;

//         while (temp) {
//             size++;
//             temp = temp->next;
//         }

//         if (n == size)
//             return head->next;

//         temp = head;
//         for (int i = 0; i < size - n - 1; i++)
//             temp = temp->next;

//         temp->next = temp->next->next;
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.removeNthFromEnd(head, 2);

//     print(head);
//     return 0;
// }

// 🔹 10. Hacker Rank-Find Merge Point of Two Lists
// Given two linked lists that merge at some point, find the node where they merge.
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     int findMergenode(node* head1, node* head2) {
//         node* a = head1;
//         node* b = head2;

//         while (a != b) {
//             a = (a == NULL) ? head2 : a->next;
//             b = (b == NULL) ? head1 : b->next;
//         }

//         return a->data;
//     }
// };

// int main() {
//     node* common = new node(30);
//     common->next = new node(40);

//     node* l1 = new node(10);
//     l1->next = new node(20);
//     l1->next->next = common;

//     node* l2 = new node(15);
//     l2->next = common;

//     Solution obj;
//     cout << obj.findMergenode(l1, l2);

//     return 0;
// }







































