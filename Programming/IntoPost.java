import java.util.*;
public class IntoPost {
    public static int precedence(char op) {
        switch (op) {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            default:
                return 0; 
        }
    }
    public static String infixtoPostfix(String infix) {
        StringBuilder postfix = new StringBuilder();
        Stack<Character> s = new Stack<>();
        for (char c : infix.toCharArray()) {
            if (c == ' ') continue;                       
            if (Character.isLetterOrDigit(c)) {           
                postfix.append(c);
            }
            else if (c == '(') {
                s.push(c);
            }
            else if (c == ')') {
                while (!s.isEmpty() && s.peek() != '(') {
                    postfix.append(s.pop());
                }
                if (!s.isEmpty()) s.pop();                
            }
            else {                                        
                while (!s.isEmpty() && precedence(s.peek()) >= precedence(c)) {
                    postfix.append(s.pop());
                }
                s.push(c);                               
            }
        }
        while (!s.isEmpty()) {                            
            postfix.append(s.pop());
        }
        return postfix.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an Infix expresSON: ");
        String infix = sc.nextLine();                     
        sc.close();
        String postfix = infixtoPostfix(infix);           
        System.out.println("Postfix expresSON:" + postfix);
    }
}