# author: Ganesha Danu Enastika (github.com/blinfoldking)
# status: Wrong Answer
# possible resolve: redefine the radius calculation

import math

N = int(input())

def strdes2(x):
    return "{:0.2f}".format(round(x, 2))

def dist(x1, x2, y1, y2):
    return math.sqrt(math.pow(x1 - x2, 2) + math.pow(y1 - y2, 2))


for n in range(0, N):
    M = int(input())
    X = []
    Y = []
    for m in range (0, M):
        coord = input().split() 
        X.append(int(coord[0]))
        Y.append(int(coord[1]))

    minX = min(X)
    maxX = max(X)
    minY = min(Y)
    maxY = max(Y)
    
    lenX = maxX + minX
    lenY = maxY + minY

    # rad = dist(lenX / 2, maxX, lenY / 2, maxY) 
    # rad = max(maxX, maxY) - max(lenX / 2, lenY / 2) 
    rad = math.sqrt(math.pow(max(maxX, maxY),2) - math.pow(max(lenX / 2, lenY / 2), 2))/2
    print(strdes2(lenX/2)+' '+strdes2(lenY/2)+' '+strdes2(rad))

