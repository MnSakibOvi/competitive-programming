/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeforcess;

import java.util.*;

/**
 *
 * @author ASUS
 */
public class Codeforcess {

     private static void multipleTestCases() 
    {
        
        int t = 1;
        while(t-- > 0) solve();
    }
    private static Scanner input =new Scanner(System.in);   
    public static void main (String[] args)
    {
      
       multipleTestCases();
    }
    private static void solve()
    {
        int flag=0;
        int h = input.nextInt();
        char arr1[]=new char[h];
        char arr2[]=new char[h];
        char arr_[]=new char[h];
        char arr3[]=new char[h];
        char arr4[]=new char[h];
        for(int i=0;i<h;i++)
        {
             arr1[i]=input.next().charAt(0);
             arr2[i]=input.next().charAt(0);
             arr_[i]=input.next().charAt(0);
             arr3[i]=input.next().charAt(0);
             arr4[i]=input.next().charAt(0);
        }
       // f//or(in)
       for(int j=0;j<h;j++)
    {
        if(arr1[j]=='O' && arr2[j]=='O')
        {
            arr1[j]='+';
            arr2[j]='+';
            flag=1;
            break;

        }
        if(arr3[j]=='O' && arr4[j]=='O')
        {
            arr3[j]='+';
            arr4[j]='+';
            flag=1;
            break;

        }

    }
         if(flag==0)
        System.out.println("NO");
    else
    {
        System.out.println("YES");
        for(int i=0;i<h;i++)
        {
         System.out.println(arr1[i]+""+arr2[i]+""+arr_[i]+""+arr3[i]+""+arr4[i]);
        }

    }
       
        
    }
    
}
