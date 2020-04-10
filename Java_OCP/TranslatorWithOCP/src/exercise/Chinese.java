package exercise;

class Chinese implements Language{
	// The default text is "Hello"
	public void translate(String text) {
		System.out.println("English \"" + text + "\" is \"Ni hao\" in Chinese");
	}
}
