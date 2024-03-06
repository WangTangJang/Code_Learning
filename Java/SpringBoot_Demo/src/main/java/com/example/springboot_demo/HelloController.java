package com.example.springboot_demo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.core.env.Environment;
import org.springframework.stereotype.Component;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloController {
    // 三种方式获取配置文件中的值
    @Value("${name}")
    private String name;

    @Value("${list[1]}")
    private String person_1;

    // 直接访问 Environment
    @Autowired
    private Environment environment;

    // ConfigurationProperties注解的方式获取配置文件中的值
    @Autowired
    private Person person;

    @Autowired
    private Persons persons;

    @RequestMapping("/Hello")
    public String Hello(){
        String[] address = persons.getAddress();

        for (String s : address) {
            System.out.println(s);
        }
        return persons.toString();
    }
}

@Component
@ConfigurationProperties(prefix = "person")
class Person{
    private String name;
    private int age;

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

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
