counter1 = 0
counter2 = 0
s1 = 0  #led status inside
s2 = 0  #led status outside
num = 0 #number of people in gym

while true:
    if val1 > 50: # product is exist at sensor1
        counter1 += 1
    else:
        counter1 = 0
    if val2 > 50: # product is exist at sensor2
        counter2 += 1
    else:
        counter2 = 0
    if counter1 = 1:
        s1 += 1
    if counter2 = 1:
        s2 += 1
    if s1 + s2 != 0:
        while s1 != 0:
            if val1 > 50:
                counter1 += 1
            if counter2 = 1:
                s1 -= 1
                num -= 1
        while s2 != 0:
            if counter1 = 1:
                s2 -= 1
                num += 1
