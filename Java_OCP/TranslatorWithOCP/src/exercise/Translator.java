package exercise;

class Translator {
	// The default text is "Hello"
	public void translateTo(Language lang, String text) {
		lang.translate(text);
	}
}

/*
 * 
 * class Translator {
	Language lang;
		
	Translator(Language lang){
		this.lang = lang;
	}
	
	// The default text is "Hello"
	public void translateTo(String text) {
		lang.translate(text);
	}
}
 */
 
