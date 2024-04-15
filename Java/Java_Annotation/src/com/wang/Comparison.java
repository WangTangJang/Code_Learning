package com.wang;

import com.wang.modal.Person;

import java.lang.reflect.Method;

public class Comparison {
    public void test1(){
        Person person = new Person();
        long start = System.currentTimeMillis();
        for (int i = 0; i < 1000000000; i++) {
            person.getName();
        }
        long end = System.currentTimeMillis();

        System.out.println("普通方法调用：" + (end - start) + "ms");
    }
    public void test2() throws Exception {
        Class c1 = Class.forName("com.wang.modal.Person");
        Method getName = c1.getDeclaredMethod("getName");
        getName.setAccessible(true);

        long start = System.currentTimeMillis();

        for (int i = 0; i < 1000000000; i++) {
            getName.invoke(c1.newInstance());
        }
        long end = System.currentTimeMillis();

        System.out.println("反射调用：" + (end - start) + "ms");

    }
    public void test3() throws Exception {
        Person person = new Person();
        Class c1 = person.getClass();
        Method getName = c1.getDeclaredMethod("getName");
        getName.setAccessible(true);
        long start = System.currentTimeMillis();
        for (int i = 0; i < 1000000000; i++) {
            getName.invoke(person);
        }
        long end = System.currentTimeMillis();
        System.out.println("反射调用：" + (end - start) + "ms");
    }

    public static void main(String[] args) throws Exception {
        Comparison comparison = new Comparison();
        comparison.test1();
        comparison.test3();
        comparison.test2();

    }
}
