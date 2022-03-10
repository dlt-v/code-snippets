class Example {
	/* Hello! This is a comment! */
	// I am also a comment.
	public static void main(String[] args) {
		
	}
	
	private static void moonWeight(double weight) {
		System.out.println("Your weight on moon is: " + weight * 0.17 + "kg.");
	}
	private static void example1() {
		int myVar1 = 1024;
		System.out.println("myVar1 contains: " + myVar1);
		
		int myVar2 = myVar1 / 2;
		
		System.out.print("myVar2 contains myVar1 / 2: ");
		System.out.println(myVar2);
		
		if (myVar2 > 0) System.out.print(true);
		
		for (int i = 0; i < 10; ++i) {
			System.out.println(i);
		}
	}
	
	private static void galToLit() {
		for (int i = 1; i <= 100; ++i) {
			System.out.println(i + " gallons is " + (3.7854 * i) + " liters.");
			if (i % 10 == 0) System.out.println();
		}
	}
}