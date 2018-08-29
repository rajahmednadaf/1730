
public  class NonTeachingStaff extends Staff{

	
	
Integer sal;

	
	NonTeachingStaff(String Tname, Integer sal)
	{
		super(Tname);
		this.sal=sal;
		
	}
	


	public void calsal()
	 {
		//this.sal=sal;
		 System.out.println(" Teaching Staff salary"+sal);
	 }
	
}
