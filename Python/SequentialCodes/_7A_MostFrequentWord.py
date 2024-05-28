import re
txt = "The Match object has properties and methods used to retrieve information about the search, and the result: .span() returns a tuple containing the start-, and end positions of the match. .string returns the string passed into the function .group() returns the part of the string where there was a match"
l = txt.split(" ")
x = 0
for i in l:
    temp = re.findall("^ "+str(i)+".| $", txt)
    if len(temp)>x:
        x = len(temp)
        print(temp)

print(x)
#To write a Python program to find the most frequent words in a text read from a file.

# with open('../content.txt', 'r') as file:
#     content = file.read()


# dict = {}

# for word in l:
#     if word not in dict:
#         dict[word] = 1
#     else:
#         dict[word] += 1

# flag = 0
# mark = ""

# for word, count in dict.items():
#     if flag<count:
#         flag = count
#         mark = word

# print(mark, " ", flag)