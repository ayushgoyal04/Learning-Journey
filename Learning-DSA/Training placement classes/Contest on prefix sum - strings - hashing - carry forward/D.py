for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    glist = list(map(int, input().split()))
    maxg = 0
    for i in range(0, n - k + 1):
        gsum = 0
        for g in glist[i:i + k]:
            gsum += g
        if gsum > maxg:
            maxg = gsum
    print(maxg)
