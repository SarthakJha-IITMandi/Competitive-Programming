n = 21
while True:
    check = 0
    for i in range(1, 20):
        if n%i!=0:
            check = 1
    if check == 1:
        n = n + 1;
    else:
        print(n)
        break