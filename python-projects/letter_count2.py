vowel = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U" ]
text = input("Enter your text here: ")
count = 0
conso = 0
space = 0

for x in text:
    if x in vowel:
        count += 1
    elif x not in vowel and x != " ":
        conso += 1
    elif x == " ":
        space += 1
print(f"You have {count + conso} letters in your text")
print(f"You have {count} vowels in the text")
print(f"You have {conso} consonants in the text")
print(f"You have {space}(s) in your text")
print("If you found this program useful, please leave a like/star.\nIf you have any questions, contribution or suggestions, please leave it in the comment box.\nThank you")
