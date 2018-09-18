import java.util.Scanner;
public class Test4{
    public static void main(String args[]){
        int c,d,e;
        Scanner s = new Scanner(System.in);
        c = s.nextInt();
        d = s.nextInt();
        Test4 t = new Test4();
         e = t.power(c,d);
         System.out.println(e);
    }



    int power(int a,int b)
    { int j = 1;
        for ( int i =1;i<=b;i++)
        {    a =a*j;    }
        return a;
    }
}