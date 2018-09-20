class A{
    void show()
    {
        System.out.println("This is from A");
    }
}

class B extends A{
    void print(){
        System.out.println("This is from B class");
    }
}

public class Inh{
    public static void main(String[] args) {
        B obj = new B();
        obj.show();
        obj.print();
        System.out.println("Hello");
    }
}

