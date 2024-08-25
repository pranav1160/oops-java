package com.pranav.StaticExample;

public class StaticBlock {
    static int a = 5;
    static int b;

    //static block will only run once
    static{
        System.out.println("Static block executed");
        b = a+5;
    }

    public static void main(String[] args) {
        StaticBlock obj1 = new StaticBlock();
        System.out.println(StaticBlock.b);

        StaticBlock.b+=10;

        StaticBlock obj2 = new StaticBlock();
        System.out.println(StaticBlock.b);

    }

}
