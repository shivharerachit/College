class Vehical{
    public void move(){
        System.out.println("Vehical is moving.");
    }
}

class Car extends Vehical{
    public void move(){
        super.move(); //Calls the move function from the base class
        System.out.println("Car is moving on the road."); 
    }
}

class Boat extends Vehical{
    public void move(){
        System.out.println("Boat is sailing on the water."); 
        super.move(); //Calls the move function from the base class
    }
}

class Overriding{
    public static void main(String args[]){
        Vehical vehical = new Vehical();
        vehical.move();
        Car car = new Car();
        car.move();
        Boat boat = new Boat();
        boat.move();
    }
}