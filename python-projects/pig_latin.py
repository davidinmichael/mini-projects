"""You have two friends who are speaking Pig Latin to each other! Pig Latin is the same words in the same order except that you take the first letter of each word and put it on the end, then you add 'ay' to the end of that. ("road" = "oadray") 

Task
Your task is to take a sentence in English and turn it into the same sentence in Pig Latin! 

Input Format 
A string of the sentence in English that you need to translate into Pig Latin. (no punctuation or capitalization)

Output Format 
A string of the same sentence in Pig Latin.

Sample Input 
"nevermind youve got them"

Sample Output 
"evermindnay ouveyay otgay hemtay"""

name = input("Enter your name: ")
sentence = input(f"{name}, Enter Your Sentence: ").lower()

words = sentence.split()

for i in words:
    j = i.replace(i[0], "")
    print(j + i[0] + "ay", end = " ", flush = True)
