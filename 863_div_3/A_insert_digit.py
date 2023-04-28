def string_to_list(word) :
    word_list = []
    for letter in word :
        word_list.append(letter)
    return word_list

def list_to_string(user_list) :
    user_string = ""
    for part in user_list :
        user_string = user_string + part
    return user_string

t = int(input())
while t > 0 :
    n,d = [int(x) for x in input().split()]

    number = string_to_list(input())

    for digit, index in enumerate(number) :
        if d >= int(digit) :
            number.insert(index, int(d))

    print(list_to_string(number))
    t = t-1
    
