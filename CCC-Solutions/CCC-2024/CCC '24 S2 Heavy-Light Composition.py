ipt = input().split()
words = []

for i in range(int(ipt[0])):
    words.append(input())
heavy = ''

#check if word is heavy 
#check alternate 
def is_heavy(word,letter):
    return word.count(letter) > 1

def check_alt(word):
   for i in range(len(word)-1):
       if (is_heavy(word,word[i]) == is_heavy(word,word[i+1])):
           return "F"
   return "T"
 
            
for word in words:
    print(check_alt(word))
    

    
