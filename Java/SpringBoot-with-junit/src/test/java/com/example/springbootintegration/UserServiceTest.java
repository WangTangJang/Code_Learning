package com.example.springbootintegration;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

@RunWith(SpringRunner.class)
@SpringBootTest(classes = SpringBootIntegrationApplication.class)
public class UserServiceTest {
    @Autowired
    private UserService userService;

    @Test
    public void testGetUserName() {
        System.out.println(userService.getUserName());
    }

}
