print("Podaj rodzaj rownania \n(1) Liniowe \n(2) Kwadratowe\n")
i = input()
if i==1:
    print("Podaj wspolczynnik a: ")
    a = input()
    print("\nPodaj wspolczynnik b: ")
    b = input()
    print("\nPodaj wspolczynnik x: ")
    x = input()
    y = a*x + b
    print("\nWynik to: " + y)

elif i==2:
    print("Podaj wspolczynnik a: ")
    a = input()
    print("\nPodaj wspolczynnik b: ")
    b = input()
    print("\nPodaj wspolczynnik c: ")
    c = input()
    print("\nPodaj wspolczynnik x: ")
    x = input()
    y = a*(x**2) + b * x + c
    print("\nWynik to: " + y)
