


class StaticKeywordDemo{

        int rollno = 10;
        static String family_name = "Core2Web Family";
        String batch = "JAVA9";

        public void methodOne(){
                System.out.println("RollNo = "+rollno);
                System.out.println("Family_Name = "+family_name);
                System.out.println("Batch = "+batch);
        }

        public void methodTwo(){
                rollno = 20;
                batch = "PPA";

                System.out.println("RollNo = "+rollno);
                System.out.println("Family_Name = "+family_name);
                System.out.println("Batch = "+batch);
        }
}
class MainMethod1{
        public static void main(String[] args){

                StaticKeywordDemo skd = new StaticKeywordDemo();

                System.out.println("\n \n *********From MethodOne********");
                skd.methodOne();
                

	        System.out.println("\n \n *********From MethodTwo********");
                skd.methodTwo();
                

                System.out.println("\n \n *********From Main Method********");
                skd.rollno = 52;
                skd.batch = "PYTHON";

                System.out.println("RollNo = "+skd.rollno);
                System.out.println("Family_Name = "+StaticKeywordDemo.family_name);
                System.out.println("Batch = "+skd.batch);
                
        }
}





