/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraylist;
import java.util.ArrayList;
import java.util.Scanner;
/**
 *
 * @author ASUS
 */
public class arraylist {
     public static int linearSearch(ArrayList<Integer> arr, int key, int index){    
        for( int i : arr){    
            if(i == key){ 
                index=1;
                break;
            } 
            else{1
                index=-1;
                
            }
        }    
       return index;     
    }
    public static void main(String[] args) { 
        ArrayList<Integer>array_List=new ArrayList<>();
        array_List.add(2);
        array_List.add(7);
        array_List.add(3);
        array_List.add(4);    
        int key ; 
        int index=0;
        System.out.println("Enter search Item :");
        Scanner input = new Scanner(System.in);
        key=input.nextInt();
        int returnValue=linearSearch(array_List, key,index);
        if(returnValue==1)
        System.out.println("Search item is found ");
        else
        System.out.println("Search item is not found ");
    }
    
    
}
