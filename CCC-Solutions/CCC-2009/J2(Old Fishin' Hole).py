trout = int(input())
pike = int(input())
pickerel = int(input())
total = int(input())

count = 0
for i in range(total//pickerel + 1):
  for j in range (total//pike + 1):
    for k in range (total//trout+1):

      if trout*k + pike*j + pickerel*i <= total:
        if k + j + i == 0:
          continue
        print(k, "Brown Trout,", j, "Northern Pike,", i, "Yellow Pickerel")
        count += 1
        
print("Number of ways to catch fish:", count)

