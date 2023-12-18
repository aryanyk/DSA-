import java.util.Stack;

public class stack1 {
  public static void main(String[] args) {

    Stack<String> stack = new Stack<>();
    System.out.println(stack.empty());
    
    stack.push("Mercury");
    stack.push("venus");
    stack.push("Earth");
    stack.push("Mars");
   
    String last=stack.pop();
    System.out.println("The last element is :" +last);
    System.out.println(stack.peek());
   // in stack element indexing  starts with 1 not zero
    System.out.println(stack.search("venus"));
    System.out.println(stack.empty());
    System.out.println(stack);
  }
}