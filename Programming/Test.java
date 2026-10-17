abstract class Shape{
    abstract void draw();
}
class Rectangle extends Shape{
    void draw(){
        System.out.print("Drawing Rectangle.");
    } 
}
class Circle extends Shape{
    void draw(){
        System.out.print("Drawing Circle.");
    }
}
public class Test{
    public static void main(String[] args){
        Shape s;
        Rectangle r=new Rectangle();
        s=r;//made object for rect and implemented abstract properties to it
        s.draw();
        Circle c=new Circle();
        c.draw();
    }
}