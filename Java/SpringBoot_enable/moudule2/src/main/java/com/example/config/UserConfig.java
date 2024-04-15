package com.example.config;

import com.example.domain.User;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;

@Configuration
@Import(User.class)
public class UserConfig {

    @Bean
    public User user() {
        return new User();
    }
}
