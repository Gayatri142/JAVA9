

class Capgemini{

	static int noOfEmp = 200000;
	int projectCount = 200;

	void displayProject(){

		System.out.println("Capgemini projectCount ="+projectCount);
	}

	static void empInfo(){

		System.out.println("Capgemini Total Employee ="+noOfEmp);
	}

}

class TCS{

        static int noOfEmp = 300000;
        int projectCount = 30;

        void displayProject(){

                System.out.println("TCS projectCount ="+projectCount);
        }

        static void empInfo(){

                System.out.println("TCS Total Employee ="+noOfEmp);
        }

}

class ITCompany{

	public static void main(String[] args){

		Capgemini pune = new Capgemini();
		pune.projectCount = 130;
		pune.displayProject();
		pune.empInfo();
			
		Capgemini chennai = new Capgemini();
                chennai.projectCount = 70;
                chennai.displayProject();
                chennai.empInfo();

		TCS mumbai = new TCS();
                mumbai.projectCount = 15;
                mumbai.displayProject();
                mumbai.empInfo();

		TCS bengolre = new TCS();
                bengolre.projectCount = 15;
                bengolre.displayProject();
                bengolre.empInfo();

	}
}
