import sys

for line in sys.stdin:
    v, t = map(int, line.strip().split())
    displacement = 2 * v * t
    print(displacement)
