from math import sqrt

def D(a, b, c):
    return pow(b, 2) - (4 * a * c)

a, b, c = [int(x) for x in input().split()] 

d = D(a, b, c)

if d < -1:
    print("no real roots")
else:
    x2 = (-b + sqrt(d)) / (2 * a)
    x1 = (-b - sqrt(d)) / (2 * a)
    x1 = "{0:.16f}".format(x1);
    x2 = "{0:.16f}".format(x2);
    res = ''
    if x1 == x2:
        res = x1+' double root'
    else:
        res = x1+' '+x2
    print(res)
  
