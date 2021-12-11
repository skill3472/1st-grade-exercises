print('Podaj licznik i mianownik: ')
l1 = int(input())
print('-'*5)
m1 = int(input())
print('Podaj drugi licznik i mianownik')
l2 = int(input())
print('-'*5)
m2 = int(input())
print('Jakie dzialanie chcesz wykonac? \n(1) Dodawanie \n(2) Odejmowanie \n(3) Mnozenie \n(4) Dzielenie')
y = input()
	
liczba1 = l1/m1
liczba2 = l2/m2
			
if(y == '1'): # Dodawanie
    wynik = liczba1 + liczba2
elif(y == '2'): # Odejmowanie
    wynik = liczba1 - liczba2
elif(y == '3'):
    wynik = liczba1 * liczba2
elif(y == '4'):
    wynik = liczba1 / liczba2

wynik = round(wynik, 2)
wynikL = wynik*100
wynikM = 100

while wynikL%2==0 and wynikM%2==0:
    wynikL = wynikL/2
    wynikM = wynikM/2

while wynikL%3==0 and wynikM%3==0:
    wynikL = wynikL/3
    wynikM = wynikM/3

while wynikL%5==0 and wynikM%5==0:
    wynikL = wynikL/5
    wynikM = wynikM/5

print('Wynik to: \n' + str(int(wynikL)) + '\n' + '-'*5 + '\n' + str(int(wynikM)))
