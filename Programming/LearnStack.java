import java.util.Stack;
public class LearnStackWorking{
    public static void main(String[] args){
        Stack<String> s=new Stack<>();
        System.out.print("Is my stack empty?"+ s.empty());
        s.push("Orange");
        s.push("Violet");
        s.push("Green");
        System.out.println("Elements in Stack:"+ s);
        System.out.println("Is my stack Empty?"+ s.empty());
        while(!s.isEmpty()){
            s.pop();
            System.out.println("Elements in Stack:"+ s);
            System.out.println("Is my stack empty?"+ s.empty());
        }
    } 
} 