import java.util.HashMap;
import java.util.Map;

public class Hello{
	int cout=100;
	public static void main(String[] arg ){
		Hello hello = new Hello();
		System.out.println(hello.add(4,5));
		Map<String,Object> map = new HashMap<>();
		map.put("No.1",2);
		map.put("No.1",3);
		map.put("No.1","测试");
		map.clear();
		try{
			System.out.println(map.get("No.1"));
		}catch(Exception e){
			System.out.println(e); 
		}
		if(map.containsValue(1)){
			System.out.println("Yes"); 
		}
	}
	int add(int i,int j){
		return i+j;
	}
}
