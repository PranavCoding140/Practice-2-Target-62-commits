//2nd program in kotlin
//kotlin is java for kids/beginners
//program to understand datatypes and max values
fun main(args: Array<String>){//public static void main equivalent
    var myint=35 //NO SEMICOLON!!!!
    var mylong=23L
    println("My integer ${myint}")
    println("My long integer ${mylong}")
    var b1:Byte=Byte.MIN_VALUE
    var b2:Byte=Byte.MAX_VALUE
    println("Smallest byte value:"+b1)
    println("Largest byte value:"+b2)
    var S1:Short=Short.MIN_VALUE
    var S2:Short=Short.MAX_VALUE
    println("Smallest short value:"+S1)
    println("Largest short value:"+S2)
    var I1:Int=Int.MIN_VALUE
    var I2:Int=Int.MAX_VALUE
    println("Smallest Integer value:"+I1)
    println("Largest Integer value"+I2)
    var L1:Long=Long.MIN_VALUE
    var L2:Long=Long.MAX_VALUE
    println("Smallest Long value:"+L1)
    println("Largest Long value:"+L2)
}