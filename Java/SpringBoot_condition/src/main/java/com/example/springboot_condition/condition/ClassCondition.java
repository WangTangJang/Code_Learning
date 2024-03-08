package com.example.springboot_condition.condition;


import org.springframework.context.annotation.Condition;
import org.springframework.context.annotation.ConditionContext;
import org.springframework.core.env.Environment;
import org.springframework.core.type.AnnotatedTypeMetadata;

import java.util.Map;

public class ClassCondition implements Condition {

    @Override
    public boolean matches(ConditionContext context, AnnotatedTypeMetadata metadata) {

        Map<String, Object> map = metadata.getAnnotationAttributes(ConditionOnClass.class.getName());
        String[] value = (String[]) map.get("value");

        boolean flag = true;
        try {

            for (String className : value) {
                Class.forName(className);
            }
        } catch (ClassNotFoundException e) {
            flag = false;
            e.printStackTrace();
        }
        return flag;
    }
}
