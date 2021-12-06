#METODA PIERWSZA
def method1(x):
    x = int(x)
    if x % 2 == 0: # Jesli modulo z liczby podanej przez uzytkownika i 2 jest rowne 0, to liczba musi byc parzysta
        print('Ta liczba jest parzysta')
    else:
        print('Ta liczba jest nieparzysta')


#METODA DRUGA
def method2(x):
    x = int(x)
    if(x & 0): # Operator & porownuje ze soba wartosc bitowa dwoch liczb i generuje liczbe binarna z tych ktore sie pokrywaja. Z liczby 1, jedyne mozliwe wyniki to 1 i 0, wiec mozna odpuscic operator porownujacy wynik z inna wartoscia. Liczby z 0 w ostatnim bicie sa parzyste.
        print('Ta liczba jest parzysta')
    else:
        print('Ta liczba jest nieparzysta')

#METODA TRZECIA
def method3(x):
    x = int(x)
    if (x // 2 ) * 2 == x: # Liczby podzielone bez reszty przez 2 i pomnozone razy 2 ktore sa parzyste, wyjda takie same, natomiast te nieparzyste wyjda z tego dzialania zmienione.
        print('Ta liczba jest parzysta')
    else:
        print('Ta liczba jest nieparzysta')

print('*' * 10)
print('Witaj!')
print('*' * 10)
print('Wybierz metode: \n(1) MODUL \n(2) BITY \n(3) DZIELENIE BEZ RESZTY\n')
y = input()
print('Podaj liczbe: \n')
if(y == '1'):
    method1(input())
elif(y == '2'):
    method2(input())
elif(y == '3'):
    method3(input())
