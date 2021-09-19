# find if a number is even and odd without using comparison statements

even_last_digit = [0, 2, 4, 6, 8]
n = int(input("Enter the no.="))

print(n%10 in even_last_digit)
