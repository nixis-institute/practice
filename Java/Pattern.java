import java.util.Scanner;
public class Pattern {
    public static void main(String args[])
    {
        Scanner s =new Scanner(System.in);

        int i,j,a,b;
        a = s.nextInt();
        b = s.nextInt();
        for(i=b;i>a;i--)
        {
            for(j=i;j>0;j--)
            {
                System.out.print("$");
            }
            System.out.print("\n");
        }
    }
}




