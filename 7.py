#Warunki: x > 9; x % 2 = 0; x % 3 != 0; x = 99;

x = 99
a = 0 # Licznik liczb
for i in range(99):
    if (x > 9) and (x % 2 == 0) and (x % 3 != 0):
        print(x)
        a+=1
    x-=1

print('\nLiczb bylo: ' + str(a))
