class Language:
    def translate(self):
        raise NotImplementedError("Derived class must implement abstract method")

class Spanish(Language):
    def translate(self, text = "Hello"):
        print(f'English "{text}" is "Hola" in Spanish.')

class Chinese(Language):
	def translate(self, text = "Hello"):
		print(f'English "{text}" is "Ni hao" in Chinese.')

class Translator:
    def translateTo(self, lang, text = "Hello"):
        self.lang = lang
        lang.translate(text)
		

text = "Hello"
translator = Translator()

chinese = Chinese()
spanish = Spanish()

for lang in [spanish, chinese]:
    translator.translateTo(lang, text)
