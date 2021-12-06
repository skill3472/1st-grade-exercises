def cuberoot(a):
    if a < 0:
        return a ** (1/3) * (-1)
    else:
        return a ** (1/3)

def obliczenia(b):
    if b < 1:
        return b * 2
    elif b == 2:
        return (b - 1) ** 4
    elif b == 6:
        return cuberoot(b+2)
    else:
        return 0

print("Wprowadz liczbe: ")
print(obliczenia(float(input())))
