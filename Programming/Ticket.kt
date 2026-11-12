/*Write a Kotlin function calculateTicketPrice(age: Int, isMonday: Boolean):
Int that returns the price of a movie ticket based on the viewer's age and the day of the week*/
import java.util.Scanner
import java.time.DayOfWeek
import java.time.LocalDate
fun main(){
    val reader=Scanner(System.`in`)
    print("Enter the age of the viewer(round off):")
    val a=readln().toInt()
    print("Enter 1 if today is Monday:")
    val d=readln().toBoolean()
    calculateTicketPrice(a, d)
}
fun calculateTicketPrice(a: Int,isMonday: Boolean){
    var tp=1000/*Write var to set temporary value, val to set permanent value*/
    if(a<18){tp=tp/2
    println("Discounted ticket price for underage: $tp")}
    else{println("Regular ticket price is: $tp")}
    return if(isMonday==false){
        tp-=200
        println("Ticket price for today is: $tp")
    }
    else{print(tp)}
}