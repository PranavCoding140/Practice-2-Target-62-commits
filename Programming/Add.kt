import java.util.Scanner
fun main(){
    val reader=Scanner(System.`in`)
    print("Enter first number:")
    val num1=readln().toInt()//readln reads input as String, .toInt converts to int
    print("Enter second number:")
    val num2=readln().toInt()
    val result=sum(num1, num2)
    println("The sum $num1 and $num2 is: $result")
}
fun sum(a: Int,b: Int):Int{
    return a+b
}