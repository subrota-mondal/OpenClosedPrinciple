package exercise;

class Translator {
	Spanish spanish;
	Chinese chinese;
	Bengali bengali;
		
	Translator(Spanish sp, Chinese cn, Bengali bn){
		spanish = sp;
		chinese = cn;
		bengali = bn;
	}
	
	// The default text is "Hello"
	public void translateTo(String text) {
		spanish.translate(text);
		chinese.translate(text);
		bengali.translate(text);
	}
}