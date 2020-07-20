


public class ClassTwo {
	public void DisplayInfoTwo(){
		System.out.println("Hello Everyone");
		System.out.println("This Method Is From ClassTwo");
	}
	public static void main(String[] args) {

		ClassOne obj1 =new ClassOne();
		ClassTwo obj2=new ClassTwo();

		obj1.DisplayInfoOne();
		obj2.DisplayInfoTwo();
	}
}
