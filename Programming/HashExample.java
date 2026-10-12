//program to implement hashmap in java
import java.util.*; 
public class HashExample{
    public static void main(String[] args){
        //country(key), population(value)
        HashMap<String, Integer> map = new HashMap<>();// creation of hashmap error
        map.put("India", 120);//insertion in map
        map.put("USA", 150);
        map.put("China",200);
        System.out.println(map);
        map.put("China", 180);
        System.out.println(map);
        //Hashmaps are unordered maps, not necessary to print in order, can print in any way
//Value updation can occur in a Hashmap. example in china population updation
/*insert function, map.put has 2 cases,
case1 key exists, value updates
case2 key dne, value inserted*/
if(map.containsKey("China")){
    System.out.print("Present in map");
}
else{
    System.out.print("Key DNE");
}
System.out.print(map.get("China"));
System.out.print(map.get("Indonesia"));
/*get function helps to get the value with the key, we use get function
here China is the key, we use it to get the value using value, if dne print null*/
//containsKey function if key exists, print true else false
//iterative output in hashmap
/*instead of using classic iterators in for loops, use value and collections.
for(val:collection). instead of printing values through indices, we print through
this by using values in array, and the name of the array*/
//int arr[]= {12, 15, 18}; //new method to declare array in java.
/*for(int i=0; i<3; i++){
    System.out.print(arr[i]);
}
System.out.println();
for(int val : arr){//key value pairs of val and arr, here arr is a big collection of data from which one value per iteration is stored in value variable
    System.out.print(val+ " ");
}
System.out.println();//here we have printed without an iterator*/
for(Map.Entry<String, Integer> e : map.entrySet()){
    System.out.print(e.getKey());//key printed
    System.out.println(e.getValue());//value printed
}//imp method to remember
/*Set<String> keys=map.keySet();//we only find keys by this
for(String key : keys){//set of stringtype named as keys
    System.out.print(key+""+map.get(key));
}*/
map.remove("China");//removed value using key
System.out.print(map);//full key-value pair is removed from map
}
}
