



class India extends Object{

	// Constructor
	
	India(){
		System.out.println("In India.....");
	}
}
class America extends Object{

	// static block
	
	static{
		System.out.println("In Static America..");
	}

	// Constructor
	
	America(){
		System.out.println("In America !!!!!");
	}
}

class Run{

	public static void main(String[] args){

		India cIndia = new India();
		America cAmerica = new America();
	}
}

