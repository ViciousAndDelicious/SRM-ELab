flag = 0
n = int(input())
keys=list(map(int, input().split()))
values=list(map(int, input().split()))

res = dict(zip(keys, values))
print("The dictionary is:")
print(res)