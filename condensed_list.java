import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

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

    public static SinglyLinkedListNode condense(SinglyLinkedListNode head) 
    {
    SinglyLinkedListNode p1=head,p2=head;
    SinglyLinkedListNode pre=head,temp=null;
    if(head == null)
        return head;
    while(p1!=null)   
    {
        p2=p1.next;
        pre=p1;
        while(p2!=null )
        { 
            if(p1.data == p2.data  && p1!=p2)
            {
                pre.next=p2.next;
                
                // temp=p2;
                // System.gc();
                
            }
            else
            {
                pre=p2;
                
            }
            p2=p2.next;
        }
        p1=p1.next;

    }  

    return head;
    }
}

public class Solution {
