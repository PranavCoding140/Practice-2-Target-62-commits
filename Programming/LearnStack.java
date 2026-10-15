import java.util.Stack;
public class LearnStack{
    public static void main(String[] args){
        Stack<Integer> s=new myStack<>();
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