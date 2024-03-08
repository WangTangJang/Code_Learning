
public class Main {

    public static void main(String[] args) throws CloneNotSupportedException {

        Person person1 = new Person("John Doe");

        // 调用 clone() 方法创建对象的副本

        Person person2 = (Person) person1.clone();

        System.out.println(person1.getName()); // 输出: John Doe
        System.out.println(person2.getName()); // 输出: John Doe

        // 修改 person2 的姓名

        person2.setName("");

        System.out.println(person1.getName()); // 输出: John Doe
        System.out.println(person2.getName()); // 输出: Jane Doe

    }

}
