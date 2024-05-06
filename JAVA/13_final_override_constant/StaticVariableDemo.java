class StaticVariableDemo{
    static int x=10;
    static int fun(){
        System.out.println("Inside fun function");
        x=x+10;
        return x;
    }
    public static void main(String[] args){
        // StaticVariableDemo ob1 = new StaticVariableDemo();
        System.out.println(fun());
        // StaticVariableDemo ob2 = new StaticVariableDemo();
        System.out.println(fun());
    }
}