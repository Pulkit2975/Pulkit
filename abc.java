import java.util.Scanner;
import java.util.Arrays;


abstract class ab {
 abstract void lastTwo(String b);
  }

public class abc{
   public static void main(String args[]);
   {
    int n;
    Scanner myobj=new Scanner(System.in); //Accepting a scanner input from the user
    System.out.println("Enter length of string");
    n=myobj.nextInt();
    int x[]=new int[n];
    System.out.println("Enter all the elements of the array");
    for(int i=0;i<=n;i++)
    {
        x[i]=myobj.nextInt();
    }
    String b=Arrays.toString(x); //Converting integer array to string
    
    
    
    void lastTwo(String u)
        {
        String c=new String(u);
        String d=new String();
        int l=c.length();
        
        char z=c.charAt(l);  //Taking the last character of the string
        char y=c.charAt(l-1);  //Taking the second last character of the string
        
        String g=String.valueOf(z); //Converting char to string
        String h=String.valueOf(y); //Converting char to string
        
        d=c.substring(0,l-2); //Taking the substring excluding last two characters
        
        String e=d.concat(h);  //Interchanging the last 2 characters and concatnating them
        String f=e.concat(g);  //Interchanging the last 2 characters and concatnating them      
        System.out.println(f);
         }
        lastTwo(b);
}
}