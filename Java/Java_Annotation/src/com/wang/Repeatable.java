package com.wang;

import java.lang.annotation.ElementType;
import java.lang.annotation.Target;

public class Repeatable {

    public static void main(String[] args) {
        Skill[] skills =  Person.class.getAnnotationsByType(Skill.class);
        for (Skill skill : skills) {
            System.out.println(skill.value());
        }
    }
}
@Target(ElementType.TYPE)
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
@java.lang.annotation.Repeatable(Skills.class)
@interface Skill{
    String value();
}
@Target(ElementType.TYPE)
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
@interface Skills{
    Skill[] value();
}

@Skill("java")
@Skill("python")
@Skill("c++")
class Person{

}