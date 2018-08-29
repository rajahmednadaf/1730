
public  class TeachingStaff extends Staff{
	
	Integer sal;

	
	TeachingStaff(String Tname,Integer sal)
	{
		super(Tname);
		this.sal=sal;
		
	}
	

	@Override
	public void calsal()
	 {
		//this.sal=sal;
		 System.out.println(" Teaching Staff salary"+sal);
	 }
	

}
