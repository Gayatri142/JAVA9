


class operation {

	int a = 50;
	int b = 10;
	float ans = 0;

	void add() {

		ans = a + b;
		System.out.println("Addition ="+ans);
	}


	void sub() {

		ans = a - b;
		System.out.println("Substraction ="+ans);
	}


	void mult() {

		ans = a * b;
		System.out.println("Multiplication ="+ans);
	}


	void div() {

		ans = a / b;
		System.out.println("Division ="+ans);
	}








	public static void main(String[] args) {

		operation op = new operation();
		op.add();


		operation op1 = new operation();
		op.sub();


		operation op2 = new operation();
		op.mult();


		operation op3 = new operation();
		op.div();
	}
}
