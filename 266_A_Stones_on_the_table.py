'''
A. Stones on the Table
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.
Input

The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
Output

Print a single integer — the answer to the problem.
'''
def Convert(string):
    list1 = []
    list1[:0] = string
    return list1
  
  
# Driver code

n = int(input())
popped_stones = 0
stone_queue = input()
stone_queue_list = Convert(stone_queue)

i = 0
while i < n-1 :
    if stone_queue_list[i] == stone_queue_list[i+1] :
        popped_stones = popped_stones + 1
        i = i + 1
    # if stone_queue_list[i] == stone_queue_list[i+1] :
    #     stone_queue_list.pop(i)
    #     popped_stones = popped_stones + 1
    #     n = n - 1
    # else : 
    #     i = i+1
#if(i == n-1) :
 #   print(popped_stones+1)
#else :
 #   print(popped_stones)

print(popped_stones)

