package com.wang;

import com.wang.modal.Person;
import com.wang.modal.Student;

// 注解相当于给它添加了额外的信息
public class Demo extends Object{

    int x = 10;

    @Override
    public String toString() {
        return super.toString();
    }

    public void show() {
        System.out.println("show");
    }

    public static void main(String[] args) throws ClassNotFoundException {
        //Person user = new Student();
        //Class c1 =  user.getClass();
        //System.out.println(c1.hashCode());
        //
        //Class c2 = Student.class;
        //System.out.println(c2.hashCode());
        //
        //Class c3 = Class.forName("com.wang.modal.Student");
        //System.out.println(c3.hashCode());
        //
        //// 一个类在内存中只有一个Class对象
        //int[] i = new int[10];
        //int[] j = new int[20];
        //System.out.println(i.getClass().hashCode());
        //System.out.println(j.getClass().hashCode());



    }
}
