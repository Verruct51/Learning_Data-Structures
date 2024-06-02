// Created by 22343019_Alvin Anugerah Pratama

import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<String> pq = new PriorityQueue<>();
        
        pq.add("Nanas");
        pq.add("Pepaya");
        pq.add("Apel");
        pq.add("Jambu");
        pq.add("Semangka");
        
        System.out.println("Isi dari Priority Queue: ");
        while (!pq.isEmpty()) {
            System.out.println(pq.poll());
        }
    }
}
