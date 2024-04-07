T = int(input())

for _ in range(T):
    line = input()
    score = 0
    consecutive_O = 0
    for char in line:
        if char == 'O':
            consecutive_O += 1
            score += consecutive_O
        else:
            consecutive_O = 0
    print(score)
