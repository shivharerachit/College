final class A{

}

public class Final{
    final void getinfo(int b, int c){
        System.out.println((b+c));
    }

    public static void main(String[] args){
        final int a = 5;
        System.out.println(a);
        //a=a+10;     //This will through an error
        System.out.println(a);
        getinfo(10,12);
    }
}