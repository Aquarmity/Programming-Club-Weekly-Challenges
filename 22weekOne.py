import math

a = float(input("a: "))

while a == 0:
    a = float(input("the value of a must not equal 0. Please input a different value. "))
b = float(input("b: "))
c = float(input("c: "))

ansOne = -1*b / 2*a
ansTwo = math.sqrt(abs((b**2 - 4*a*c))) / 2*a

if (b**2 - 4*a*c) < 0:
    print(complex(ansOne, ansTwo))
    print(complex(ansOne, -1*ansTwo))
else:
    print(ansOne + ansTwo)
    print(ansOne - ansTwo)