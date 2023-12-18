import java.util.Collection;
import java.util.Collections;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class p_queue {
    public static void main(String[] args) {
       // Queue<Double> queue =new PriorityQueue<>();  this will print acccording to the priority
        Queue<Double> queue =new PriorityQueue<>(Collections.reverseOrder());
        queue.offer(2.5);
        queue.offer(1.0);
        queue.offer(3.5);
        queue.offer(2.6);

        while(!queue.isEmpty()){
           System.out.println(queue.poll()); // in priority queue it will already sort according to the priority. 
        }
    }
    
}
