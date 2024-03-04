package com.example;
// Server.java
import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(8888)) {
            System.out.println("Server is waiting for client to connect...");
            Socket socket = serverSocket.accept();
            System.out.println("Client connected.");

            // 接收客户端发送的序列化对象
            try (ObjectInputStream in = new ObjectInputStream(socket.getInputStream())) {
                Person receivedPerson = (Person) in.readObject();
                System.out.println("Received Person object: " + receivedPerson);
            } catch (ClassNotFoundException e) {
                e.printStackTrace();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
