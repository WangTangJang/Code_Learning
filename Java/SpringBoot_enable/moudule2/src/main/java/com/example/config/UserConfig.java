package com.example.config;

import com.example.domain.User;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class UserConfig {

    @Bean(name = "xxx")
    public User user() {
        return new User();
    }
}
