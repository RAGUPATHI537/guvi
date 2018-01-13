import math

i,r =input().split()
i=int(i)
r=int(r)
print(type(i))
c=0
for q in range(i,r+1):
  if int(math.sqrt(q)) ==q**2:
    count++
print(count)
