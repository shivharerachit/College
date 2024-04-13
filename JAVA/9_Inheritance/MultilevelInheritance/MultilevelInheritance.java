import java.util.Scanner;

class Personal{
    private String Name;
    private String Enrollment;
    private String Branch;
    private int Year;
    private long Contact;
    boolean flag=false;

    void getInfo(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your Name:");
        Name = scanner.nextLine();
        System.out.println("Enter your Enrollment:");
        Enrollment = scanner.nextLine();
        System.out.println("Enter your Contact No.:");
        Contact = scanner.nextLong();
        scanner.nextLine();    // consume newline left-over
        System.out.println("Enter your Branch:");
        Branch = scanner.nextLine();
        System.out.println("Enter your current Year of study:");
        Year = scanner.nextInt();
        flag=true;
        scanner.close();
    }

    void showInfo(){
        if(flag==true){
            System.out.println("You have not entered the right details.");
            System.out.println("Please enter the details first.");
            getInfo();
        }
        System.out.println("Name : " + Name);
        System.out.println("Enrollment No. : " + Enrollment);
        System.out.println("Contact Number : " + Contact);
        System.out.println("Branch : " + Branch);
        System.out.println("Year of Study : " + Year);
    }

    void showInfoInMarksheet(){
        System.out.println(" ________________________________________________________________________________________");
        System.out.println("|\t\t\t\t****Mark Sheet****\t\t\t\t\t|");
        System.out.println("| Name:"+Name+"\t\t\t\t\tEnrollment No.:"+Enrollment+"\t|");
        System.out.println("| Branch:"+Branch+"\t\t\t\t\t\t\t\tYear:"+Year+"\t\t|");
        System.out.println("| Contact No.:"+Contact+"\t\t\t\t\t\t\t\t|");
    }
}

class Academic extends Personal{
    private float Physics, Chemistry, Math, English, Hindi, Total, Percentage;
    private String Result;
    boolean flag1=false;

    void getAcademicInfo(){
        if(flag==false){
            System.out.println("You have not entered the right details.");
            System.out.println("Please enter the details first.");
            getInfo();
        }
        Scanner scanner = new Scanner(System.in);
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
        flag1=true;
        scanner.close();
    }

    void showMarksheet(){
        if(flag1==false){
            System.out.println("You have not entered the right details.");
            System.out.println("Please enter the details first.");
            getAcademicInfo();
        }
        showInfoInMarksheet();
        System.out.println("|\tPhysics\t\t\t\t\t\t\t\t"+Physics+"\t\t|");
        System.out.println("|\tChemistry\t\t\t\t\t\t\t"+Chemistry+"\t\t|");
        System.out.println("|\tMath\t\t\t\t\t\t\t\t"+Math+"\t\t|");
        System.out.println("|\tEnglish\t\t\t\t\t\t\t\t"+English+"\t\t|");
        System.out.println("|\tHindi\t\t\t\t\t\t\t\t"+Hindi+"\t\t|");
        System.out.println("|\tTotal Marks\t\t\t\t\t\t\t"+Total+"\t\t|");
        System.out.println("|\tPercentage\t\t\t\t\t\t\t"+String.format("%.2f", Percentage)+"%\t\t|");
        System.out.println("|\tResult\t\t\t\t\t\t\t\t"+Result+"\t\t|");
    }
}

class Sports extends Academic{
    String S_name;
    int S_part;
    boolean flag2=false;


    void getSportInfo(){
        Scanner scanner = new Scanner(System.in);
        if(flag1==false){
            System.out.println("You have not entered the right details.");
            System.out.println("Please enter the details first.");
            getAcademicInfo();
        }
        System.out.println("Have you participated in any sport (Type 1 for yes and 2 for no)?");
        S_part = scanner.nextInt();
        scanner.nextLine();
        if(S_part==0){
            S_name="Not Participated";
        }
        else{
            System.out.println("Enter your Sports:");
            S_name = scanner.nextLine();
        }
        scanner.close();
    }

    void showSportInfo(){
        if(flag2==false){
            System.out.println("You have not entered the right details.");
            System.out.println("Please enter the details first.");
            getSportInfo();
        }
        showMarksheet();
        System.out.println("|\tSports Name\t\t\t\t\t\t\t"+S_name+"\t\t|");
        System.out.println("|_______________________________________________________________________________________|");
    }
    
}

class MultilevelInheritance {
    public static void main(String[] args){
        Sports student1 = new Sports();

        student1.showSportInfo();
    }
}