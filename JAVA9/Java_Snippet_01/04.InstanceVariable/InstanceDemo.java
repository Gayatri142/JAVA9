






class InstanceDemo{
	int age = 22;
	String name = "Shubhada";
	float weight = 56.5f;
	long phone_number =8130232622l;

	public void DisplayInfo(){

		System.out.println("\n Name ="+name);
		System.out.println("\n Age ="+age);
		System.out.println("\n Weight ="+weight);
		System.out.println("\n Phone_Number ="+phone_number);
		System.out.println();
	}
}
class MainDemo{
	public static void main(String[] args){

		InstanceDemo isd = new InstanceDemo();
		isd.DisplayInfo();
	}
}
/*

   Instance Variable = age,name,weight,phone_number
   Instance Method = DisplayInfo
   */
