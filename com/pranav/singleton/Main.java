package com.pranav.singleton;

public class Main {
    public static void main(String[] args) {
        Singleton obj = new Singleton(100);
        System.out.println(obj.a);
    }
}
