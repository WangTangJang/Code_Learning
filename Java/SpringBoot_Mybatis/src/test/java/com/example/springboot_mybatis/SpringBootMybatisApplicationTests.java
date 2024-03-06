package com.example.springboot_mybatis;

import com.example.springboot_mybatis.domain.User;
import com.example.springboot_mybatis.mapper.UserMapper;
import org.junit.jupiter.api.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

import java.util.List;

@RunWith(SpringRunner.class)
@SpringBootTest
class SpringBootMybatisApplicationTests {

    @Autowired
    private UserMapper userMapper;

    @Autowired
    private UserMapper userXmlMapper;

    @Test
    void findAll() {
        List<User> users = userMapper.findAll();
        for (User user : users) {
            System.out.println(user);
        }
    }
    @Test
    void findAllXml() {
        List<User> users = userXmlMapper.findAll();
        for (User user : users) {
            System.out.println(user);
        }
    }

}
