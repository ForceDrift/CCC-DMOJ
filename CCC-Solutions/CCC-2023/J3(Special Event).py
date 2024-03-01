amount_people = int(input(" "))
store = []
for i in range (amount_people):
  store.append(input(" "))


store_count = [0,0,0,0,0]


for row in range(5):
  for col in range(amount_people):
    if (store[col][row] == "Y"):
      store_count[row] +=  1 
 

max_store_count = max(store_count)
p_day = [i+1 for i, j in enumerate(store_count) if j == max_store_count]

p_day = ','.join(map(str, p_day))

print(p_day)

