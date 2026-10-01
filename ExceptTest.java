//Demonstrate that a derived-class Constructor cannot catch exceptions thrown by its base-class constructor
public class BaseClass{
    BaseClass() throws Exception{
        System.out.println("Base constructor executing");
        throw new Exception("Exception thrown from Base constructor");
    }
}
class childClass extends BaseClass{
    childClass() throws Exception{
      /* try {
         super();  
       }catch(Exception e){
        System.out.println("Caught exception");
       }*/
       System.out.println("Derived constructor execution");
    }
}
public class ExceptTest{
    public static void main(String[] args){
    try{
        childClass d= new childClass();
    }
    catch(Exception e){
        System.out.println("Caught in main:"+ e.getMessage());
    }
}
}

