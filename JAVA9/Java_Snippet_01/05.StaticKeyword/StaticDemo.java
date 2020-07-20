


class StaticMethodDemo{

	int rollno = 10;
	static String family_name = "Core2Web Family";
	String batch = "JAVA9";

	static void oneRule(){
		System.out.println("You Must Know The Code Till The Core");
		System.out.println("Only Rule: Coding Coding and Coding 24X7");
	}

	public void methodOne(){
		System.out.println("RollNo = "+rollno);
		System.out.println("Family_Name = "+family_name);
		System.out.println("Batch = "+batch);
	}

	public void methodTwo(){
		rollno = 20;
		batch = "PPA";

		System.out.println("RollNo = "+rollno);
                System.out.println("Family_Name = "+family_name);
                System.out.println("Batch = "+batch);
        }
}
class MainMethod{
	public static void main(String[] args){

		StaticMethodDemo skd = new StaticMethodDemo();

		System.out.println("\n \n *********From MethodOne********");
		skd.methodOne();
		StaticMethodDemo.oneRule();

		System.out.println("\n \n *********From MethodTwo********");
                skd.methodTwo();
                StaticMethodDemo.oneRule();

		System.out.println("\n \n *********From Main Method********");
		skd.rollno = 52;
		skd.batch = "PYTHON";

		System.out.println("RollNo = "+skd.rollno);
                System.out.println("Family_Name = "+StaticMethodDemo.family_name);
                System.out.println("Batch = "+skd.batch);
		StaticMethodDemo.oneRule();
	}
}






