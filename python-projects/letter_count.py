# This program counts the amount of letters, vowel and consonants you have in your text.
text = input("Type your text: ")
count = 0
consonant = 0

for x in text:
    if x == 'a' or x == 'A':
        count += 1
    elif x == 'e' or x == 'E':
        count += 1
    elif x == 'i' or x == 'I':
        count += 1
    elif x == 'o' or x =='O':
        count += 1
    elif x == 'u' or x == 'U':
        count += 1
    else:
        consonant += 1
total_letters = count + consonant
print(f"Your text is: \"{text}\"")
print(f"You have {total_letters} letters in your text")
print(f"You have {count} vowels in your text")
print(f"You have {consonant} consonants in your text")
print("If you found this program useful, please leave a like/star.\nIf you have any questions, contribution or suggestions, please leave it in the comment box.\nThank you")
