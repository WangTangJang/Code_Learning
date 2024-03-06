package com.example.springboot_with_redis;

import jakarta.annotation.Resource;
import org.junit.jupiter.api.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.test.context.junit4.SpringRunner;

@RunWith(SpringRunner.class)
@SpringBootTest
class SpringbootWithRedisApplicationTests {

    @Resource
    private RedisTemplate redisTemplate;

	@Test
	public void testSet() {
		redisTemplate.boundValueOps("name").set( "John Doe");
	}



	@Test
	public void testGet() {
		String name = (String) redisTemplate.boundValueOps("name").get();
		System.out.println(name);
	}

}
