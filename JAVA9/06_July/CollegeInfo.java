

class TSSM{

	static int student = 10000;
	int universityRankers = 40;

	void displayStudent(){

		System.out.println("TSSM University Rankers="+universityRankers);
	}

	static void studentInfo(){

		System.out.println("TSSM Total Student ="+student);
	}
}

class JSPM{

        static int student = 20000;
        int universityRankers = 60;

        void displayStudent(){

                System.out.println("JSPM University Rankers="+universityRankers);
        }

        static void studentInfo(){

                System.out.println("JSPM Total Student ="+student);
        }
}

class collegeInfo{

	public static void main(String[] args){

		TSSM narhe = new TSSM();
		narhe.universityRankers =20;
		narhe.displayStudent();
		narhe.studentInfo();

		TSSM wagholi = new TSSM();
                wagholi.universityRankers =20;
                wagholi.displayStudent();
                wagholi.studentInfo();

		JSPM bavdhan = new JSPM();
                bavdhan.universityRankers =20;
                bavdhan.displayStudent();
                bavdhan.studentInfo();

		JSPM hadapsar = new JSPM();
                hadapsar.universityRankers =40;
                hadapsar.displayStudent();
                hadapsar.studentInfo();
       

       	}
}


