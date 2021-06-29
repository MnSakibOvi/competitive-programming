/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgclass.code;
import java.util.Scanner;

/**
 *
 * @author ASUS
 */
public class ClassCode {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       double input_mark;
        System.out.println("Enter Mark :");
        Scanner input=new Scanner(System.in);
        input_mark=input.nextDouble();
        if(input_mark>=80&&input_mark<=100)
            System.out.println("Gpa : 5");
        
        else if(input_mark>=70&&input_mark<=79)
            System.out.println("Gpa : 4");
    
        else if(input_mark>=60&&input_mark<=69)
            System.out.println("Gpa : 3.5");
        
        else if(input_mark>=50&&input_mark<=59)
            System.out.println("Gpa : 3");
   
       else if(input_mark>=40&&input_mark<=49)
            System.out.println("Gpa : 2");
        
        else if(input_mark>=33&&input_mark<=39)
            System.out.println("Gpa : 1");
        
        else if(input_mark>=0&&input_mark<=32)
            System.out.println("Gpa : 0");
        
        else 
            System.out.println("Invalid Mark");
        
    }
    
}
