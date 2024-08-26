package com.pranav.properties.inheritance;

public class Main {
    public static void main(String[] args) {
//        Box box = new Box(4,5,7);
//        Box box1 = new Box(box);
//            BoxWeight box2 = new BoxWeight();
//            box2.weight=23;
        BoxWeight box3 = new BoxWeight(2,3,4,5);
        System.out.println(box3.l+" "+box3.h+" "+box3.w+" "+box3.weight);

        Box box6 = new BoxWeight(1,2,3,4);//weight is initialised but but reference is of the parent class so we cant access weight below
        System.out.println(box6.w);

//        BoxWeight box7 = new Box();//this is not allowed as the constructor is of parent class but the reference is of child class
    }
}
