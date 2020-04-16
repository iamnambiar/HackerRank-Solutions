# https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

# Enter your code here. Read input from STDIN. Print output to STDOUT

if __name__ == "__main__":
    phoneBook = {}
    NoofEntries = int(input())
    for entry in range(NoofEntries):
        content = input()
        name, phoneNumber = content.split()
        phoneBook[name] = phoneNumber

    while True:
        try:
            name = input()  
            if name in phoneBook:
                print(name,phoneBook[name],sep="=")
            else:
                print("Not found")     
        except EOFError:
            break