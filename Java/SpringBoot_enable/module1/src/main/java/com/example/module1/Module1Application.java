package com.example.module1;

import com.example.config.EnableUser;
import com.example.config.MyImportBeanDefinitionRegistrar;
import com.example.config.MyImportSelector;
import com.example.domain.User;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;
import com.example.config.UserConfig;
import org.springframework.context.annotation.Import;
import org.springframework.context.annotation.ImportSelector;

import java.util.Map;

@SpringBootApplication
//@Import({User.class}) // 获取到的bean是User，但是名字不是user。
//@Import(UserConfig.class)
//@Import(MyImportSelector.class)
@Import(MyImportBeanDefinitionRegistrar.class)
public class Module1Application {

    public static void main(String[] args) {
        ConfigurableApplicationContext context = SpringApplication.run(Module1Application.class, args);
        Object user = context.getBean("user");
        System.out.println(user);
        //
        //Object user = context.getBean(User.class);
        //System.out.println(user);
        // 通过类型获取bean
        Map<String, User> map = context.getBeansOfType(User.class);
        System.out.println(map);

    }

}
