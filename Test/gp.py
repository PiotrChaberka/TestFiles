class TajemniczaFunkcja:
    def __init__(self):
        self.a = 5
        self.b = 3
        self.lista = [1, 9, 2, 8, 3, 7, 4, 6, 5]

    def wylicz(self):
        self.a += self.lista[self.a]
        self.b += self.lista[self.b]
        for i in range(len(self.lista)):
            self.lista[i] = min(self.lista[i], self.a / 2, self.a - self.b)
        return self.lista[1], self.lista[-1]

class TajemniczaFunkcja2:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def wypisz(self):
        if (self.a > self.b or self.a + self.b < 3):
            print("A")
        elif (self.b > self.a or self.a * self.b < 3):
            print("B")
        elif (self.a > self.b or self.a * self.b > 3):
            print("C")
        else:
            print("D")

tajemnica = TajemniczaFunkcja()
klucz1, klucz2 = tajemnica.wylicz()
tajemnica2 = TajemniczaFunkcja2(klucz1, klucz2)
skarb = tajemnica2.wypisz()
