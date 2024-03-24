T = int(input())

for t in range(1, T + 1):
    N, *speeds = map(int, input().split())
    centinela = max(speeds)
    print("Case {}: {}".format(t, centinela))
