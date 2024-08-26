package com.pranav.properties.inheritance;

public class BoxWeight extends Box {
    double weight;

    public BoxWeight(){
        this.weight=weight;
    }

    public BoxWeight(double h, double l, double w, double weight) {
        super(h, l, w);//calls the parent class constructor
        this.weight = weight;
    }


}
