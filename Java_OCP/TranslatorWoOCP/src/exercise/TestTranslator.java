package exercise;

public class TestTranslator {

	public static void main(String[] args) {
			Translator translator;
			String text = "Hello";
			Spanish sp = new Spanish();
			Chinese cn = new Chinese();
			Bengali bn = new Bengali();
			
			translator = new Translator(sp, cn, bn);
			translator.translateTo(text);
	}
}

