/*****************************************
Following is the Linked list node structure already written 
 
class LinkedListNode<T> {
    T data;
    LinkedListNode<T> next;
    LinkedListNode<T> prev;

    public LinkedListNode(T data)
    {
        this.data=data;
    }
}
*****************************************/

// https://www.codingninjas.com/codestudio/problems/loop-reconnect_920461

import java.util.List;

public class Solution {

    public static LinkedListNode<Integer> newLoop(LinkedListNode<Integer> head) {
        adjustLoop(head);
        return head;
    }

    private static void adjustLoop(LinkedListNode<Integer> head) {
        LinkedListNode<Integer> slow = head;
        LinkedListNode<Integer> fast = head;
        while (true) {

            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                break;
            }

        }
        slow = head;

        while (slow != fast) {

            slow = slow.next;
            fast = fast.next;
        }
        int startLoop = slow.data;
        while (fast.next != slow) {
            fast = fast.next;
        }
        fast.next = null;
        LinkedListNode<Integer> nextGreatNode = null;
        while (head != null) {
            if (head.data > startLoop) {
                nextGreatNode = (nextGreatNode == null || nextGreatNode.data > head.data) ? head : nextGreatNode;
            }
            head = head.next;
        }

        fast.next = nextGreatNode;
    }

}
