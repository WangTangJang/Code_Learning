package com.example.springboot_mybatis.mapper;


import com.example.springboot_mybatis.domain.User;
import org.apache.ibatis.annotations.Mapper;

import java.util.List;

@Mapper
public interface UserXmlMapper {

    public List<User> findAll();

}
