
package besicjav;

import java.util.Scanner;

public class ComntDemo 
{
    //private static Object input;
     
    private static void multipleTestCases() 
    {
        
        int t = input.nextInt();
        while(t-- > 0) solve();
    }
    private static Scanner input =new Scanner(System.in);   
    public static void main (String[] args)
    {
      
       multipleTestCases();
    }
    private static void solve()
    {
        int x = input.nextInt();
        int c = 0,v=0;
        if(x % 2==0 && x!=2)
        {
            int z=x-2;
            int p=2;
            System.out.println(z+" "+p);
            
        }
        else
        {
            int z=x-1;
            int p=1;
            System.out.println(z+" "+p);
        }
        
    }
}

