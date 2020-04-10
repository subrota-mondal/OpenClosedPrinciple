package exercise;

public class TestTranslator {

	public static void main(String[] args) {
			
			String text = "Hello";
			Translator translator = new Translator();
			
			Spanish sp = new Spanish();
			translator.translateTo(sp, text);
			
			Chinese cn = new Chinese();
			translator.translateTo(cn, text);
			
			Bengali bn = new Bengali();
			translator.translateTo(bn, text);
	}
}

