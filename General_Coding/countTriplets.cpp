//count linked list sum of triplets in O(N^2)

/*
Count Triplets 
Medium Accuracy: 100.0% Submissions: 581 Points: 4
Given a sorted linked list of distinct nodes (no two nodes have the same data) and an integer X. Count distinct triplets in the list that sum up to given integer X.

Example 1:

Input: LinkedList: 1->2->4->5->6->8->9, X = 17
Output: 2
Explanation: Distinct triplets are (2, 6, 9) 
and (4, 5, 8) which have sum equal to X i.e 17.

Example 2:

Input: LinkedList: 1->2->4->5->6->8->9, X = 15
Output: 5
Explanation: (1, 5, 9), (1, 6, 8), (2, 4, 9), 
(2, 5, 8), (4, 5, 6) are the distinct triplets
Your Task:  
You don't need to read input or print anything. Complete the function countTriplets() which takes a head reference and X as input parameters and returns the triplet count

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ Number of Nodes ≤ 103 
1 ≤ Node value ≤ 104

Topic Tags
 Linked List Mathematical
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void push(struct Node **head_ref, int new_data)
{

    struct Node *new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int countTriplets(struct Node *head, int x);

/* Driver program to test count function*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, i, num;
        struct Node *head = NULL;
        cin >> n >> x;
        for (i = 0; i < n; i++)
        {
            cin >> num;
            push(&head, num);
        }

        /* Check the count function */
        cout << countTriplets(head, x) << endl;
    }
    return 0;
} // } Driver Code Ends

//User function Template for C++

int countTriplets(struct Node *head, int x)
{
    unordered_map<int, int> map;
    int count = 0;
    Node *first = head;
    // Node* second = first->next;

    while (first)
    {
        map[first->data]++;
        first = first->next;
    }

    for (first = head; first->next != NULL; first = first->next)
    {
        for (Node *second = first->next; second != NULL; second = second->next)
        {
            int left = x - first->data - second->data;
            if (map[left] != 0 && left > second->data)
            {
                count++;
                // map[left]--;
            }
            // else break;
        }
    }
    return count;
}