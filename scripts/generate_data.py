import math


lines = []
for i in range(1, 10000, 17):
    lines.append("{}th line\n".format(str((i + (i*8))% 1.5)))
    print((i + (i*76))% 1.5)
file = open("data.txt", "x")
file.writelines(lines)
file.close


