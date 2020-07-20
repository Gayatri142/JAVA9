

class operators1 {

	int a = 10;
	int b = 20;
	int c = 50;
	int ans = 0;

	void display() {
		ans = --a + ++b + c--;
		System.out.println("Answer ="+ans);
	}

	public static void main(String[] args) {

		operators obj = new operators();
		obj.display();
	}
}

