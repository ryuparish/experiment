import sys
def factorial(n):
    if(n == 1):
        return 1;
    if(n == 0):
        return 0;
    return n * factorial(n-1)

def main():
    n = int(input("Enter n here: "))
    print(factorial(n) - (2**n))
    return

main()
