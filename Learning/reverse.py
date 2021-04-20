number = int(input("Enter your number"))
while int(number) != 0:
    reverse = int(number) % 10
    print(int(reverse), end="")
    number /= 10
print()