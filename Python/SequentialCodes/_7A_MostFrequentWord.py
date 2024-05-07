#To write a Python program to find the most frequent words in a text read from a file.

with open('../content.txt', 'r') as file:
    content = file.read()

l = content.split(" ")
dict = {}

for word in l:
    if word not in dict:
        dict[word] = 1
    else:
        dict[word] += 1

flag = 0
mark = ""

for word, count in dict.items():
    if flag<count:
        flag = count
        mark = word

print(mark, " ", flag)