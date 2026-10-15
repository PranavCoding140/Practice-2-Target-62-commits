//sample seen program to learn stack implementation in java.
import java.util.Stack;
public class myStackTest{
    public static void main(String[] args){
        Stack myStack=new Stack<>();
        System.out.print("Is my stack empty?"+ myStack.empty());
        myStack.push("Orange");
        myStack.push("Violet");
        myStack.push("Green");
        System.out.println("Elements in Stack:"+ myStack);
        System.out.println("Is my stack Empty?"+ myStack.empty());
        while(!myStack.isEmpty()){
            myStack.pop();
            System.out.println("Elements in Stack:"+ myStack);
            System.out.println("Is my stack empty?"+ myStack.empty());
        }
    } 
} 