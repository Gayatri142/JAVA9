
class kutumb{
	
	//Instance variable
	int mob=1;
	int laptop=2;
	//Static variable
	static int tv=3;

	void shashimethode(){
		System.out.println("Mob= "+ mob);
		System.out.println("laptop= "+ laptop);
		System.out.println("TV= "+ tv);
	}

	void vikasmethode(){
		System.out.println("Mob= "+ mob);
		System.out.println("Laptop= "+ laptop);
		System.out.println("TV= "+ tv);
	}
	public static void main(String[] args){
		kutumb shashi= new kutumb();
		shashi.tv=0;
		shashi.shashimethode();
		//shashi.vikasmethode();
	
		kutumb vikas = new kutumb();
		//vikas.tv=0;    //dought
		vikas.vikasmethode();
	}
}
