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

    @Autowired
    private Environment environment;

    @Autowired
    private Person person;

    @RequestMapping("/Hello")
    public String Hello(){

        return name+" " + environment.getProperty("age")+"和"+person.toString();
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
