def main(k: int, n: int, w: int):
    cost = k * (w * (1 + w) / 2)
    if cost > n:
        print(int(cost - n))
    else:
        print(0)
        # print(int(n - cost))


if __name__ == '__main__':
    k, n, w = map(int, input().split())
    # main(3, 17, 4)
    main(k, n, w)
