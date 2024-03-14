package com.example.thymeleaf.controller;

import com.example.thymeleaf.model.User;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class HelloController {
    @GetMapping("/")
    public String index(Model model) {
        User user = new User("John", "123@442", "123");

        model.addAttribute("message", "Hello, Thymeleaf!");
        model.addAttribute("user", user);
        return "index";
    }
}
