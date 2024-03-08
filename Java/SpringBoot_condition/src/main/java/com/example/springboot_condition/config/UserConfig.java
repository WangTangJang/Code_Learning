package com.example.springboot_condition.config;

import com.example.springboot_condition.condition.ConditionOnClass;
import com.example.springboot_condition.domain.User;
import org.springframework.boot.autoconfigure.condition.ConditionalOnClass;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class UserConfig {


    @Bean
    @ConditionalOnClass(name = "org.springframework.data.redis.core.RedisTemplate")
    @ConditionOnClass("org.springframework.data.redis.core.RedisTemplate")
    public User user() {
        return new User();
    }
}
