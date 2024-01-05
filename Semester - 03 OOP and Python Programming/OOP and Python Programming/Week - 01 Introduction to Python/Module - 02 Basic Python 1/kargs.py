# def totName(first, second):
#     # name = first+" "+second

#     # using F string
#     name = f'{first} {second}'
#     return name

# print(totName('Rakibul', 'Hassan'))

# def fullName(*args):
#     name = f'{args} {args}'
#     return name

# print(fullName('Rakibul', 'Hassan'))

# def a_lot(num1, num2):
#     add = num1+num2
#     div = num1/num2
#     mul = num1*num2
#     rem = num1-num2
#     return [add, div, mul, rem]
# everything = a_lot(10,5)
# print(everything)

def famousName(first, second, **additional):
    name = f'{first} {second}'
    for key, value in additional.items():
        print(key, value)
    return name
name = famousName(first='Rakibul', second='Hassan', thrid='sohan')
print(name)