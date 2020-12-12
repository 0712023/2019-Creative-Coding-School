counter1 = 0
counter2 = 0
s1 = 0  #led status inside
s2 = 0  #led status outside
if val1 = LOW:
    counter1 += 1
else:
    counter1 = 0

if val2 = LOW:
    counter2 += 1
else:
    counter2 = 0

while true:
    # counting toward outside
    if counter1 != 0:
        s1 += 1
        if s1 != 0:
            if counter2 != 0:
                n -= 1
                s1 -= 1
    # counting toward inside
    if counter2 != 0:
        s2 += 1
        if s2 = 1:
            if counter1 != 0:
                n += 1
                s2 -= 1
    if s1 + s2 != 0:
