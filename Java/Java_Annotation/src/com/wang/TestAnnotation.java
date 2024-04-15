package com.wang;

import com.wang.modal.Person;
import com.wang.modal.Student;

import java.lang.annotation.*;

public class TestAnnotation {
    public static void main(String[] args) {
        Person person = new Person();
        Class<? extends Person> c1 = person.getClass();
        Annotation[] annotations = c1.getAnnotations();
        for (Annotation annotation : annotations) {
            System.out.println(annotation);
        }

        Student student = new Student();
        Class<? extends Student> c2 = student.getClass();
        MyAnnotation myAnnotation = c2.getAnnotation(MyAnnotation.class);
        System.out.println(myAnnotation.value());

    }
}

