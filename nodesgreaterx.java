import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class SinglyLinkedListNode {
    public int data;
    public SinglyLinkedListNode next;

    public SinglyLinkedListNode(int nodeData) {
        this.data = nodeData;
        this.next = null;
    }
}

class SinglyLinkedList {
    public SinglyLinkedListNode head;
    public SinglyLinkedListNode tail;

    public SinglyLinkedList() {
        this.head = null;
        this.tail = null;
    }

    public void insertNode(int nodeData) {
        SinglyLinkedListNode node = new SinglyLinkedListNode(nodeData);

        if (this.head == null) {
            this.head = node;
        } else {
            this.tail.next = node;
        }

        this.tail = node;
    }
}

class SinglyLinkedListPrintHelper {
    public static void printList(SinglyLinkedListNode node, String sep, BufferedWriter bufferedWriter) throws IOException {
        while (node != null) {
            bufferedWriter.write(String.valueOf(node.data));

            node = node.next;

            if (node != null) {
                bufferedWriter.write(sep);
            }
        }
    }
}


class Result {


    public static SinglyLinkedListNode removeNodes(SinglyLinkedListNode A, int x) 
    {
        SinglyLinkedListNode curr=A,pre=A;
        
        while(curr!=null)
        {
            
            if(curr.data > x)
            {
                if(curr == A)
                {
                    A=curr.next;
                    pre=A;
                }
                else
                    pre.next=curr.next;
                curr=curr.next;
            }
            else
            {
                pre=curr;
                curr=curr.next;
            }
        }
        return A;
    }

}
public class Solution {
