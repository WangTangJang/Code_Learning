package com.example;
import java.util.concurrent.CountDownLatch;

public class CountDownLatchExample {

    public static void main(String[] args) throws InterruptedException {
        // 创建CountDownLatch，计数器初始化为3
        CountDownLatch countDownLatch = new CountDownLatch(3);

        // 启动三个线程
        for (int i = 1; i <= 3; i++) {
            Thread worker = new WorkerThread(i, countDownLatch);
            worker.start();
        }

        // 主线程等待，直到计数器为零
        countDownLatch.await();

        System.out.println("All workers have finished their tasks. Main thread continues.");
    }

    static class WorkerThread extends Thread {
        private final int workerId;
        private final CountDownLatch countDownLatch;

        public WorkerThread(int workerId, CountDownLatch countDownLatch) {
            this.workerId = workerId;
            this.countDownLatch = countDownLatch;
        }

        @Override
        public void run() {
            System.out.println("Worker " + workerId + " is doing its task.");
            // 模拟工作耗时
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

            // 任务完成，计数器减1
            countDownLatch.countDown();
            System.out.println("Worker " + workerId + " has finished its task.");
        }
    }
}
