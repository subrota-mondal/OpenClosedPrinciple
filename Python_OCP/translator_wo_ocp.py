class Spanish:
    def translate(self, text = "Hello"):
        print(f'English "{text}" is "Hola" in Spanish.')

class Chinese:
	def translate(self, text = "Hello"):
		print(f'English "{text}" is "Ni hao" in Chinese.')

class Bengali:
	def translate(self, text = "Hello"):
		print(f'English "{text}" is "Ohe" in Bengali.')


class Translator:
	def __init__(self):
		self.spanish = Spanish()
		self.chinese = Chinese()
		self.bengali = Bengali()

	def translateTo(self, text = "Hello"):
		self.spanish.translate(text)
		self.chinese.translate(text)
		self.bengali.translate(text)

text = "Hello"
translator = Translator()
translator.translateTo(text);