// Created by 22343019_Alvin Anugerah Pratama

import java.util.LinkedList;
import java.util.Queue;

public class StackWithQueue {

    private Queue<Integer> q1 = new LinkedList<>();
    private Queue<Integer> q2 = new LinkedList<>();
    private int top;

    // Constructor
    public StackWithQueue() {
        top = 0;
    }

    // Push operation
    public void push(int x) {
        q1.add(x);
        top = x;
    }

    // Pop operation
    public int pop() {
        if (q1.isEmpty()) {
            return -1;
        }

        while (q1.size() != 1) {
            top = q1.remove();
            q2.add(top);
        }

        int popValue = q1.remove();

        Queue<Integer> temp = q1;
        q1 = q2;
        q2 = temp;

        return popValue;
    }

    // Top operation
    public int top() {
        return top;
    }

    // Check if the stack is empty
    public boolean isEmpty() {
        return q1.isEmpty();
    }

    // Main method
    public static void main(String[] args) {
        StackWithQueue stack = new StackWithQueue();

        stack.push(1);
        stack.push(2);
        stack.push(3);

        System.out.println("Elemen paling atas: " + stack.top());
        System.out.println(stack.pop() + " diambil dari stack");

        System.out.println("Elemen paling atas: " + stack.top());
        System.out.println(stack.pop() + " diambil dari stack");
        System.out.println("Apakah stack kosong? " + stack.isEmpty());
    }
}
