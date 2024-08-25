package com.pranav;

public class Main {

    public static void main(String[] args) {
        
//        com.pranav.Student std1 = new com.pranav.Student();

        Student std2 = new Student("Pranav", 1160, 9.8f);

        Student std3 = new Student(std2);

        System.out.println(std3.name);
        System.out.println(std3.marks);
        System.out.println(std3.rno);


    }
}

class Student {
        String name;
        float marks;
        int rno;

        Student(){
            this.name="krishna";
            this.rno = 21;
            this.marks = 95;
        }

        Student(String name,int rno,float marks){
            this.marks=marks;
            this.name=name;
            this.rno=rno;
        }

        Student (Student other){
            this.name=other.name;
            this.marks=other.marks;
            this.rno=other.rno;
        }
}
