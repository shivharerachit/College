import java.util.Scanner;

class CheckLeap{
    public static void main(String args[]){
        int year;
        boolean leap=false;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the year:");
        year = scanner.nextInt();

        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    leap=true;
                }
                else{
                    leap=false;
                }
            }
            else{
                leap=true;
            }
        }
        else{
            leap=false;
        }

        if(leap==false){
            System.out.println(year+" is not a leap year.");
        }
        else{
            System.out.println(year+" is a leap year.");
        }
        scanner.close();
    }
}