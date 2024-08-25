package com.pranav.StaticExample;

public class Human {
    String name;
    int age;
    int salary;
    boolean isMarried;
    static int population;

    static void message(){
        System.out.println("hello these msg received");

    }

    public Human(String name, int age, int salary, boolean isMarried) {
        this.name = name;
        this.age = age;
        this.salary = salary;
        this.isMarried = false;
        Human.population +=1;
    }
}
