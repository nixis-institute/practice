marks=int(input("enter your marks"))
if marks<=90:
    if marks<=80:
        if marks<=70:
            if marks<=60:
                if marks<=50:
                    if marks<=40:
                        if marks<=33:
                            print("you have failed")
                        else:
                            print("your grade is D")
                    else:
                        print("your grade is C2")
                else:
                    print("your grade is C1")
            else:
                print("your grade is B2")
        else:
            print("your grade is B1")
    else :
        print("your grade is A2")
else:
    print("your grade is A1")