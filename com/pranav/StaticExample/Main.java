package com.pranav.StaticExample;

public class Main {
    public static void main(String[] args) {
        Human pranav = new Human("pranav",18,2000000,true);
        Human abrar = new Human("abrar",20,20000,false);

        System.out.println(Human.population);
        System.out.println(Human.population);

        Human rohit = new Human("rohir",23,3123254,true);
        System.out.println(Human.population);

    }

    static void staticGreet(){
//        nonStaticGreet();//non static in static not allowed
        //but you can create an object for it
        Main obj = new Main();
        obj.nonStaticGreet();
        //now u can run this
    }
    void nonStaticGreet(){
        System.out.println("greeting everyone");
        staticGreet();//static in nonstatic allowed
    }

}
