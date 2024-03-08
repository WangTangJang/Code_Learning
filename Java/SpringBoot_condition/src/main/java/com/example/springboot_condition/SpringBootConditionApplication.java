package com.example.springboot_condition;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class SpringBootConditionApplication {

    public static void main(String[] args) {
        ConfigurableApplicationContext context = SpringApplication.run(SpringBootConditionApplication.class, args);
        Object redisTemplate =  context.getBean("user");
        System.out.println(redisTemplate);
    }

}
