value_str = input("Enter value : ")
value = int(value_str)

if value >= 90:
    grade = "A"
elif value >= 80:
    grade = "B"
elif value >= 70:
    grade = "c"
elif value >= 60:
    grade = "D"
else :
    grade = "E"

print("Grade : %s" % grade)