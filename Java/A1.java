import java.util.Scanner;
public class A1{
    public static void main (String args[]){
        Scanner s = new Scanner(System.in);
        int a,b,c;
        System.out.print("Enter the table no =");
        
        a = s.nextInt();

        for (int i  =1;i<=10;i++)
        {
            b = a*i;
            System.out.println(a+"X"+i+"="+b);
            /*System.out.println("");
             System.out.print(""+a);
              System.out.print("x");
               System.out.print(""+i);
                System.out.print("=");
                 System.out.println(""+b);*/
        }
    }
}