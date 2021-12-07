def ciag1(n):
    if(n<1):
        print('Blad! Podaj wyzsza wartosc.')
    if(n==1):
        return 12
    elif(n==2):
        return 15
    else:
        return ciag1(n-1) + 3

def ciag2(n):
    if(n<1):
        print('Blad! Podaj wyzsza wartosc.')
    else:
        return (1-(2*n+1)*(-1)**n)/4 # Nie potrafilem wykonac drugiego rekurencyjnie, wiec zrobilem to ze wzoru

y = input()
print("Ciag 1: " + str(ciag1(int(y))))
print("Ciag 2: " + str(ciag2(int(y))))
