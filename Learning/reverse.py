number = int(input("Enter your number"))
while int(number) != 0:
    reverse = int(number) % 10
    print(int(reverse), end="")
    if reverse == 0:
        break
    number /= 10
print()