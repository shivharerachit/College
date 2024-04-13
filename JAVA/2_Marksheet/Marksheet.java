import java.util.Scanner;

class Marksheet{
    public static void main(String args[]){
    
        String Name;
        int Rollno, Class;
        String Section;
        float Physics, Chemistry, Math, English, Hindi;
        float Total, Percentage;
        String Result;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your Name:");
        Name = scanner.nextLine();
        System.out.println("Enter your Roll No.:");
        Rollno = scanner.nextInt();
        System.out.println("Enter your Class:");
        Class = scanner.nextInt();
        scanner.nextLine();
        System.out.println("Enter your Section:");
        Section = scanner.nextLine();

        System.out.println("Enter Marks for Physics:");
        Physics = scanner.nextFloat();
        System.out.println("Enter Marks for Chemistry:");
        Chemistry = scanner.nextFloat();
        System.out.println("Enter Marks for Math:");
        Math = scanner.nextFloat();
        System.out.println("Enter Marks for English:");
        English = scanner.nextFloat();
        System.out.println("Enter Marks for Hindi:");
        Hindi = scanner.nextFloat();
        
        Total = Physics + Chemistry + Math + English + Hindi;
        Percentage = Total/5;

        if(Percentage<30 || Physics<30 || Chemistry<30 || Math<30 || English<30 || Hindi<30){
            Result = "FAIL";
        }
        else{
            Result = "PASS";
        }

        System.out.println(" ________________________________________________________________________________________");
        System.out.println("|\t\t\t\t****Mark Sheet****\t\t\t\t\t|");
        System.out.println("|\tName:"+Name+"\t\t\t\t\tRoll No.:"+Rollno+"\t\t|");
        System.out.println("|\tClass:"+Class+"\t\t\t\t\t\t\tSection:"+Section+"\t\t|");
        System.out.println("|\t\t\t\t\t\t\t\t\t\t\t|");
        System.out.println("|\tPhysics\t\t\t\t\t\t\t\t"+Physics+"\t\t|");
        System.out.println("|\tChemistry\t\t\t\t\t\t\t"+Chemistry+"\t\t|");
        System.out.println("|\tMath\t\t\t\t\t\t\t\t"+Math+"\t\t|");
        System.out.println("|\tEnglish\t\t\t\t\t\t\t\t"+English+"\t\t|");
        System.out.println("|\tHindi\t\t\t\t\t\t\t\t"+Hindi+"\t\t|");
        System.out.println("|\tTotal Marks\t\t\t\t\t\t\t"+Total+"\t\t|");
        System.out.println("|\t\t\t\t\t\t\t\t\t\t\t|");
        System.out.println("|\tPercentage\t\t\t\t\t\t\t"+String.format("%.2f", Percentage)+"%\t\t|");
        System.out.println("|\tResult\t\t\t\t\t\t\t\t"+Result+"\t\t|");
        System.out.println("|_______________________________________________________________________________________|");
        scanner.close();
    }
}