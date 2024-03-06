package com.example.springbootintegration;


import org.springframework.stereotype.Service;

@Service
public class UserService {
    public String getUserName() {
        return "John Doe";
    }
}
