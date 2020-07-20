
class COVID19 {

	int pationtAge = 26;
	static String centerName = "Pune";
	int RoomNo = 20;
       	
	void symptoms(){	

		System.out.println("Fever , Dry cough , Tiredness");
	}
	static void treatment(){

		System.out.println("Immunity increasese by Hydrocloquine Medicine");
	}

}

class Virus {

	public static void main(String[] args){

		COVID19 obj = new COVID19();
		obj.symptoms();
		obj.treatment();
		COVID19.treatment();
	}
}
