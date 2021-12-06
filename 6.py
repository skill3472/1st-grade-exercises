import math

print('Podaj a, b i c')
a = float(input())
b = float(input())
c = float(input())

ob = a + b + c # Ob oznacza obwod trojkata
p = ob / 2 # Litera p oznacza polowe obwodu trojkata
s = math.sqrt(p * (p - a) * (p - b) * (p - c)) # Wykorzystanie wzoru Herona do obliczenia pola

print('\nObwod tego trojkata to: ' + str(ob) + ', a pole to ' + str(s) + '.')
