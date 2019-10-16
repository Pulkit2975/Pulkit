public class xyz 
{
    public static void main(String args[])
    { 
        public static void haveThree(int x[])
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
   

    

