package pojo;

public class main {

	public static void main(String[] args)
	{
		
		Player captain=new Player();
		captain.setAge(23);
		captain.setName("messi");
		
		Player goalkeeper=new Player("g. singh",20);
		
		Goalkeeper goalkeeper1=new Goalkeeper("r. singh",20);
		
		System.out.println("player name="+captain.getName());
		System.out.println("player name="+captain.getAge());
		
		
		System.out.println("player name="+goalkeeper.getName());
		System.out.println("player name="+goalkeeper.getAge());
		
		System.out.println("player name="+goalkeeper1.getName());
		System.out.println("player name="+goalkeeper1.getAge());
		
	}
}
