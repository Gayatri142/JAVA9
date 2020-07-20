class T20 {
	static String capt = "Virat Kolhi";
	int toss = 0;
	static void list(){

		System.out.println("Player list");
	}
	void batBowl() {
		System.out.println("Decision");
	}
	public static void main(String[] args){
		System.out.println(capt);
	//	System.out.println(toss);
		T20 firstmatch = new T20();
		System.out.println(firstmatch.toss);
	}
}
