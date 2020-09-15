s1 = int(input())
l1 = list(map(int, input().split()))
s2 = int(input())
l2 = list(map(int, input().split()))
l1.extend(l2)
l1.sort()
print("Sorted list is:", *l1)
  