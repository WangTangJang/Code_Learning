package com.wang;

import java.lang.annotation.*;
import java.lang.reflect.Field;

// 用反射读取注解的信息，模拟处理注解信息的流程
class Main{
    public static void main(String[] args) throws ClassNotFoundException {
        // 都会获取 Student 类的 Class 对象。
        Class c1 = student.class;
        Class c2 = Class.forName("com.wang.student");

        // 获取一个类上面的注解
        Annotation[] annotations = c1.getAnnotations();
        for (Annotation annotation : annotations) {
            System.out.println(annotation);
        }
        // 获取类的注解的 value 的值
        Table table = (Table) c1.getAnnotation(Table.class);
        String value = table.value();
        System.out.println(value);
        // 获取属性的注解
        Field[] fields = c1.getDeclaredFields();
        for (Field field : fields) {
            Column column = field.getAnnotation(Column.class);
            System.out.println(column.columnName());
            System.out.println(column.type());
            System.out.println(column.length());
        }
    }
}
// 类名的注解
@Target(ElementType.TYPE)
@Retention(RetentionPolicy.RUNTIME)
public @interface Table {
    String value();
}

// 属性的注解
@Target(ElementType.FIELD)
@Retention(RetentionPolicy.RUNTIME)
@interface Column{
    String columnName();
    String type();
    int length();
}
@SuppressWarnings("all")
@Table("db_student")
class student{
    @Column(columnName = "id",type = "int",length = 10)
    private int id;
    @Column(columnName = "name",type = "varchar",length = 3)
    private String name;
    @Column(columnName = "age",type = "int",length = 3)
    private int age;

    @Override
    public String toString() {
        return "student{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", age=" + age +
                '}';
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}