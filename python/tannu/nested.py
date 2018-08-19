age = int(input("Enter your age "))
marks = int(input("Enter marks "))
q = int(input("Qualification "))

if age<30:
    if(marks>=60):
        if(q>=12):
            print("You are Qualified")
        else:
            print("Your qualification is not enough")
    else:
        print("your marks is not enough")
else:
    print("your age is not enough")             