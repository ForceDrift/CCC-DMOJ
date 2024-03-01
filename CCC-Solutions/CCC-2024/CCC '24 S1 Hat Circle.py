n = int(input())
hats = []
for i in range(n):
    hats.append(input())

ctr = 0
for i in range(n):
    # see each other

    if(hats[i] == hats[(i+n//2)%n]):
        ctr += 1 
    
print(ctr)