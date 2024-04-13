import java.util.Scanner;

class SimpleIntrest{
    public static void main(String args[]){
        float p,r,t;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the value of Principle Amount:");
        p = scanner.nextFloat();
        System.out.println("Enter the value of Rate of Intrest:");
        r = scanner.nextFloat();
        System.out.println("Enter the value of Time Period (in Years):");
        t = scanner.nextFloat();

        System.out.println("Simple Intrest:"+((p*r*t)/100));
        scanner.close();
    }
}