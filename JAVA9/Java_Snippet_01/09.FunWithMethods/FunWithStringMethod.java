


class SomeStringMethods{

	public static void main(String[] args){

		// String one =''; 
		String two =" ";
		String three ="navigableset@Core2Web Technologies";

		//isEmpty() is a method that returns True if String is empty 
		System.out.println(two.isEmpty());

		//length() method returns the count of characters/letters present in the string
		System.out.println(three.length());

		//charAt method takes position and returns charater at that position in the string
		System.out.println(three.charAt(0));

		//equals() method tells that whether two strings are equal or not
		System.out.println(two.equals(""));

		//concat() appends the string given as a parameter to the end of the original string
		System.out.println(three.concat(" is the best place"));

		//toLowerCase() method converts the letter that in UpperCase to LowerCase
		System.out.println("NAVIGABLE-SET".toLowerCase());

		//toUpperCase() method converts the letter that in LowerCase to UpperCase
		System.out.println("navigable-set".toUpperCase());

	}
}
