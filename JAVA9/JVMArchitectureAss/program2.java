class IndianArmy {

	static int employees = 500000;
	int soliders = 300000;

	void displayInfo() {

		System.out.println(" IndianArmy Soliders = "+soliders);
		System.out.println(" They works on Borders");
	}

	static void empInfo() {

		System.out.println(" Total IndianArmySoliders = "+employees);
	}
}

class IndianNavy {

	static int employees = 400000;
        int sailors = 200000;

        void displayInfo() {

                System.out.println(" IndianNavy Sailors = "+sailors);
                System.out.println(" They works on Sea Area or Boats");
        }

        static void empInfo() {

                System.out.println(" Total IndianNavy Sailors = "+employees);
        }
}

class IndianAirForce {

        static int employees = 300000;
        int soldiers = 100000;

        void displayInfo() {

                System.out.println(" IndianAirForce Soldiers = "+soldiers);
                System.out.println(" They works on AirLines");
        }

        static void empInfo() {

                System.out.println(" Total IndianNavy Soldiers = "+employees);
        }


	public static void main(String[] args) {

		IndianArmy up =new IndianArmy();
		up.displayInfo();
		up.empInfo();

		IndianNavy mumbai =new IndianNavy();
                mumbai.displayInfo();
                mumbai.empInfo();
		
		IndianAirForce Delhi =new IndianAirForce();
                Delhi.displayInfo();
                Delhi.empInfo();


	}

}
