print('Wybierz ciag: \n(1) 12, 9, 6, 3, 0, -3 \n(2) 3, -6, 12, -24, 48, -96 \n(3) -300, -30, -3, -0.3, -0.03, -0.003\n')
wybor = input()
print('\nPodaj n: ')
n = int(input())
x = 0;
print('\n')
if wybor=='1':
    i = 12
    for x in range(n):
        print(i)
        i -= 3
elif wybor=='2':
    i = 3
    for x in range(n):
        print(i)
        i = i * (-2)
elif wybor=='3':
    i = -300
    for x in range(n):
        print(i)
        i = i / 10
