
package com.mycompany.beratejai.com;
import java.util.*; 

public class Main_class extends tour_package{
    public static void payment_calcualtion(int seatNumber)
    {
        Scanner inp = new Scanner(System.in);
              tour_package packag = new tour_package();
       
        int per_package_price= packag.Seatcapacity;
        double cost=per_package_price*seatNumber;
        String registared =inp.nextLine();
        if(registared=="registared")
        {
            cost=cost-(cost*(10/100));
        }
        double totalcost=cost+(cost*(2/100));
        System.out.println("total payment is"+totalcost);

    }
   
    public static void buy_package()
    {
         Scanner input = new Scanner(System.in);
         
       tour_package pack = new tour_package();
   
        System.out.println("whick package summer or winter?");
         System.out.println("press 1 for summer 2 for winter");
         int sw = input.nextInt();
         String month;
         if(sw == 1)
         {
              System.out.println("january or june");
               summer mn = new summer();
             mn.smonth  = input .nextLine();
         }
         else
         {
            winter mn = new winter();
            System.out.println("new year or xmas");
             mn. wmonth=input .nextLine();
         }
         System.out.println("how many seat you need?");
         int seatnumber=input.nextInt();
         if(seatnumber+pack.Seatcapacity<=10)
         {
            System.out.println("seat available go for payment");
            payment_calcualtion(seatnumber);
         }
         else
             System.out.println("seat not available");
         
         

    
    }
    public static void main(String[] args) {
        //System.out.println("chutiya");
         Scanner sc = new Scanner(System.in);
         
        Travellars tr = new Travellars();
        tr.tid = sc.nextLine();
        tr.Tname = sc.nextLine();
        tr.country = sc.nextLine();
        
       buy_package();       
        
    }
    
}
