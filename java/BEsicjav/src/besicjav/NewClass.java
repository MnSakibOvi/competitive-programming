/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package besicjav;

/**
 *
 * @author ASUS
 */
public class NewClass {
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
