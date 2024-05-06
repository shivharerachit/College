import java.util.Scanner

class Personal{
    private String Name;
    private String Enrollment;
    private long Contact;
    private String Branch;
    private int year;

    void getinfo(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your Name:");
        Name = scanner.nextLine();
        System.out.println("Enter your Enrollment No.:");
        Enrollment = scanner.nextLine();
        

    }
}