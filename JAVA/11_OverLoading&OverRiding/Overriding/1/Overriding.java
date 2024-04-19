class Animal{
    public void makeSound(){
        System.out.println("Some Generic Sound");
    }
}

class Dog extends Animal{
    public void makeSound(){
        System.out.println("Woof");
    }
}

class Cat extends Animal{
    public void makeSound(){
        System.out.println("Meow");
    }
}

class Overriding{
    public static void main(String args[]){
        Animal animal = new Animal();
        animal.makeSound();
        Dog dog = new Dog();
        dog.makeSound();
        Cat cat = new Cat();
        cat.makeSound();
    }
}