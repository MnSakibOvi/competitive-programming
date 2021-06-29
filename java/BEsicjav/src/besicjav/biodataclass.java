
package besicjav;

import java.util.Scanner;

public class besicjav 
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
        int h = input.nextInt();
        int m = input.nextInt();
        int res=(1440-((h*60)+m));
        System.out.println(res);
        
    }
}
