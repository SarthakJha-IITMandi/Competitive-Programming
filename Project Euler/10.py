import numpy as np


def sum_primes(n):
    ps = np.ones((n,), dtype=bool)
    for p in range(2, int(n**0.5 + 1)):
        if ps[p]:
            ps[p * p :: p] = False
    return np.sum(np.nonzero(ps), dtype="i8") - 1


print(sum_primes(2000000))
