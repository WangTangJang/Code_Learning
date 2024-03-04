package com.example;
import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try (Socket socket = new Socket("localhost", 8888)) {
            // 创建一个Person对象
            Person person = new Person("Jane Doe", 30);

            // 将Person对象序列化并发送到服务器
            try (ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream())) {
                out.writeObject(person);
                System.out.println("Sent Person object: " + person);
            } catch (IOException e) {
                e.printStackTrace();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}