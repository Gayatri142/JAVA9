class ExamCancel {
	int x=10;
	static int y=20;
	int z=30;

	void happy(){

		System.out.println("Thanx CM");
	}
	static void decisionPending(){
		System.out.println("Angry Faces");
	}
}

class Student {

	public static void main(String[] args){
		ExamCancel obj = new ExamCancel();
		obj.happy();
//		decisionPending();	//error
		obj.decisionPending();
		ExamCancel.decisionPending();
	}
}
