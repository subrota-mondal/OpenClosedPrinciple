package exercise;

class Spanish implements Language{
	// The default text is "Hello"
	public void translate(String text) {
		System.out.println("English \"" + text + "\" is \"Hola\" in Spanish");
	}
}
