def ciag(n):
    if n==1:
        return 4.5
    elif n>1:
        return 5*ciag(n-1)+3
    else:
        print('Nieprawidłowe dane wejściowe.')

y = input()
print(ciag(int(y)))
