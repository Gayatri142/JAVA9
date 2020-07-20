


class dominos {

	int price = 250;
	int quantity = 2;
	static float total;

	static void bill() {

	//	total = pizza.price * pizza.quantity;
		System.out.println("Total Bill = "+total);
	}

	public static void main(String[] args) {

		dominos pizza = new dominos();
		pizza.price = 350;
		pizza.quantity = 4;

		dominos fires = new dominos();
		fires.price = 150;
		fires.quantity = 3;
		
		total = (pizza.price * pizza.quantity) + (fires.price * fires.quantity);
		dominos.bill();


	}
}


	
