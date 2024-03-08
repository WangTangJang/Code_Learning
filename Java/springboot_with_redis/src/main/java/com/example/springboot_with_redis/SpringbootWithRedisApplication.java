package com.example.springboot_with_redis;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

@SpringBootApplication
public class SpringbootWithRedisApplication {

	public static void main(String[] args) {
		ConfigurableApplicationContext context = SpringApplication.run(SpringbootWithRedisApplication.class, args);
		Object redisTemplate = context.getBean("redisTemplate");
		System.out.println(redisTemplate);
	}

}
