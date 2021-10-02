from math import ceil
text = input()
remove_spaces = text.split(" ")
remove_spaces = [int(i) for i in remove_spaces]

if (1 <= remove_spaces[0] <= 10**9 and 1 <= remove_spaces[1] <= 10**9 and 1 <= remove_spaces[2] <= 10**9):
    r = ceil(remove_spaces[0] / remove_spaces[2]) * ceil(remove_spaces[1] / remove_spaces[2])

print(r)