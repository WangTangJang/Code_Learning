package com.example.module1;

import com.example.config.EnableUser;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;
import com.example.config.UserConfig;
import org.springframework.context.annotation.Import;

@SpringBootApplication
@EnableUser
public class Module1Application {

    public static void main(String[] args) {
        ConfigurableApplicationContext context = SpringApplication.run(Module1Application.class, args);
        Object user = context.getBean("user");
        System.out.println(user);
    }

}
