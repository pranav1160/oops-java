package com.pranav.properties.inheritance;

public class Box {
    double h;
    double l;
    double w;

    Box(){
        this.h = -1;
        this.l = -1;
        this.w = -1;
    }

        Box(double h, double l, double w) {
        this.h = h;
        this.l = l;
        this.w = w;
    }

    //cube
        Box(double side){
            this.h=side;
            this.w=side;
            this.l=side;
        }

        Box(Box old){
            this.h = old.h;
            this.l = old.l;
            this.w = old.w;
        }

        public void information(){
            System.out.println("Running the box");
        }



}
