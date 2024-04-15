package com.wang.reflection;

import com.wang.modal.Person;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class Demo {
    public static void main(String[] args) throws Exception {
        // 获取Class对象的方式
        Class c1 = Class.forName("com.wang.modal.Person");
        // 通过无参构造器创建对象
        Person person = (Person) c1.newInstance(); // 无参构造器
        System.out.println(person);

        // 通过有参构造器创建对象
        Constructor constructor = c1.getDeclaredConstructor(String.class, int.class);
        person= (Person) constructor.newInstance("wang", 20);
        System.out.println(person);

        // 通过反射调用普通方法
        person = (Person) c1.newInstance();
        Method setName = c1.getDeclaredMethod("setName", String.class);
        setName.invoke(person, "sun");
        System.out.println(person);

        // 通过反射操作属性
        person = (Person) c1.newInstance();
        Field name = c1.getDeclaredField("name");
        name.setAccessible(true); // 关闭安全检测
        // 不能直接操作私有属性，需要关闭程序的安全检测
        name.set(person, "zhao");
        System.out.println(person);

    }
}

class A{
    static {
        System.out.println("A类的静态代码块初始化");
        m = 300;
    }
    static int m = 100;

    public A(){
        System.out.println("A类的无参构造初始化");
    }

}