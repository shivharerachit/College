class P{
    int a;
    int b;
    P(int s, int t){
        a=s;
        b=t;
    }
}

class Q extends P{
    int c;
    int d;
    Q(int m, int n, int o, int p){
        super(o, p);
        c = m;
        d = n;
    }
    void sum(){
        System.out.println("Sum = " + (a+b+c+d));
    }
}

public class Parameterized_constructor{
    public static void main(String[] args){
        Q obj = new Q(3, 4, 5, 6);
        obj.sum();
    }
}