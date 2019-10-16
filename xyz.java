import java.util.Scanner;
public class xyz 
{
    public static void main(String args[])
    { 
        Scanner ty=new Scanner(System.in);
        System.out.println("Enter length of array");
        int n=ty.nextInt();
        int x=new int[n];
        System.out.println("Enter elements of array");
        for(int i=0;i<=n;i++)
        {
            x[i]=ty.nextInt();
        }
        public static void haveThree(int x[]) // question
        {    
           int count=0;
           for(int i=0;i<=x.length;i++)
           {
               if(x[i]==3)
               {
                   if(x[i+1]==3)
                   {
                   count=count+1;
                   }
                   else
                   {
                   count=count+0;
                   }
               }
           }
           if(count!=0)
           {
           System.out.println("False"); 
           }
           else
           {
           System.out.println("True");
            }
        }
     
    }
 }
   

    

