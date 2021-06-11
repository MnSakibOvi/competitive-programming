package com.mycompany.beratejai.com;


public class sum {
      String month;

}
package com.mycompany.beratejai.com;


public class tour_package {
    String package_id = "763874398";
    String package_name  = "Nahdjdhk";
    int package_prize= 66839;
    int Seatcapacity=0;
}
package com.mycompany.beratejai.com;


public classtravellerss {
     String tid;
    String Tname;
    String country;

}


package com.mycompany.beratejai.com;


public class winter {
    String wmonth;
}

package com.mycompany.beratejai.com;
import java.util.*;

public class Main_class extends tour_package{
    public static void payment(int number)
    {
        Scanner inp = new Scanner(System.in);
              tour_package packag = new tour_package();

        int price= packag.Seatcapacity;
        double cost=price*number;
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

        System.out.println("whick package sum or winter?");
         System.out.println("press 1 for sum 2 for winter");
         int sw = input.nextInt();
         String month;
         if(sw == 1)
         {
              System.out.println("january or june");
               sum mn = new sum();
             mn.smonth  = input .nextLine();
         }
         else
         {
            winter mn = new winter();
            System.out.println("new year or xmas");
             mn. wmonth=input .nextLine();
         }
         System.out.println("how many seat you need?");
         int number=input.nextInt();
         if(number+pack.Seatcapacity<=10)
         {
            System.out.println("seat available go for payment");
            payment(number);
            pack.Seatcapacity+=number;
         }
         else
             System.out.println("seat not available");




    }
    public static void main(String[] args) {

         Scanner sc = new Scanner(System.in);

       travellerss tr = newtravellerss();
        tr.tid = sc.nextLine();
        tr.Tname = sc.nextLine();
        tr.country = sc.nextLine();

       buy_package();

    }

}

