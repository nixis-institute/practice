import java.util.Scanner;
public class A2{
    public static void main (String args[]){
        Scanner s = new Scanner(System.in);
        int a,b,c;
        System.out.print("Enter the no  =");
        a = s.nextInt();
          System.out.print("Enter the power =");
              b = s.nextInt();
              A2 t = new A2();
              c =t.ab(a,b);
              System.out.println(""+c);              
              }
              int ab(int a,int b)
              {   int m = 1;
                  for (int i=1;i<=b;i++)
                  {     m =m*a;

                  }    return m;
              }
}
