package com.example.springboot_with_junit;


import org.springframework.stereotype.Service;

@Service
public class UserService {
    public String getUserName() {
        return "John Doe";
    }
}
