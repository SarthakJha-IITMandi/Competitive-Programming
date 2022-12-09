for i in range(1, 1001):
    for j in range(i + 1, 1001):
        c = 1000 - i - j
        if i * i + j * j == c * c:
            print(i * j * c)
