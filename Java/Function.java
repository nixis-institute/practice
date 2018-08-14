public class Function{
    public static void main(String args[])
    {
        Function obj = new Function();
        int x,y,z;
        x=5;y=8;
        z=obj.sub(x,y);
        System.out.println("The sum is "+z);
    }
    int sum(int a, int b)
    {
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
}