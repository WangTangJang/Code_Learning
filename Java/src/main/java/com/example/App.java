package com.example;

import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.sql.Connection;

public class App {
    public static void main(String[] args) {
        // 我将写一个简单的程序，将输入的ip地址转为二进制
        // 1. 从控制台输入一个ip地址
        System.out.println("请输入一个ip地址：");
        Scanner sc = new Scanner(System.in);
        String ip = sc.nextLine();
        System.err.println("您输入的ip地址是：" + ip);
        // 2. 将ip地址转为二进制
        String[] ipArr = ip.split("\\.");
        StringBuilder sb = new StringBuilder();
        for (String ipStr : ipArr) {
            int num = Integer.parseInt(ipStr);
            String binaryStr = Integer.toBinaryString(num);
            // 补全8位
            while (binaryStr.length() < 8) {
                binaryStr = "0" + binaryStr;
            }
            sb.append(binaryStr+".");
        }
        System.out.println("ip地址转为二进制是：" + sb.toString());
    }
}