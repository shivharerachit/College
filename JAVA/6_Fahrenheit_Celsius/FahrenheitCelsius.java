import java.util.Scanner;

class FahrenheitCelsius{
    public static void main(String args[]){
        int choice;
        double celsius;
        double fahrenheit;
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. Fahrenheit to Celsius");
        System.out.println("2. Celsius to Fahrenheit");
        System.out.println("Enter your choice:");
        choice = scanner.nextInt();
        switch (choice) {
            case 1:
                System.out.println("Enter the temperature in Fahrenheit:");
                fahrenheit = scanner.nextDouble();
                celsius = (fahrenheit-32)*5/9;
                System.out.println("Temperature in Celsius: "+celsius);
                break;

            case 2:
                System.out.println("Enter the temperature in Celsius:");
                celsius = scanner.nextDouble();
                fahrenheit = (celsius*9/5)+32;
                System.out.println("Temperature in Fahrenheit: "+fahrenheit);
                break;

            default:
                System.out.println("Invalid choice.");
                break;
        }
        scanner.close();
    }
}