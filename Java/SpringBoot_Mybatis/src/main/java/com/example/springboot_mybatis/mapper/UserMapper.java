package com.example.springboot_mybatis.mapper;

import com.example.springboot_mybatis.domain.User;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;

import java.util.List;

@Mapper
public interface UserMapper {

    @Select("select * from users")
    public List<User> findAll();

}
