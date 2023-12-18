import java.util.LinkedList;
import java.util.Queue;

public class queue1 {
    public static void main(String[] args) {
        Queue<String> queue =new LinkedList<String>() ;
        // add=enqueue,offer()
        //remove=dequeue,poll()
        
        //QUEUE=FIFO data structure
        queue.offer("Aryan");
        queue.offer("Mehul");
        queue.offer("pradunya");
        queue.offer("Adish");

        System.out.println(queue.peek());
        queue.poll();
        System.out.println(queue);
        System.out.println(queue.isEmpty());
        System.out.println(queue.size());
        System.out.println(queue.contains("Mehul"));
    }
    
}
