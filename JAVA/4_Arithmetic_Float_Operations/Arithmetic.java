import java.util.Scanner;

class Arithmetic{
    public static void main(String args[]){
        float a, b;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter two numbers:");
        System.out.println("a:");
        a = scanner.nextFloat();
        System.out.println("b:");
        b = scanner.nextFloat();

        System.out.println("Arithmetic Operations on Two Numbers");
        System.out.println("Sum:"+(a+b));
        System.out.println("Difference:"+(a-b));
        System.out.println("Product:"+(a*b));
        System.out.println("Division:"+(a/b));
        System.out.println("Modulus:"+(a%b));
        scanner.close();
    }
}