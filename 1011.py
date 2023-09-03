import math 

test_case = int(input()) 

count = 0 
result = [] 

for i in range(test_case): 
    a, b = map(int, input().split())

    distance = b - a 

    sqrt_root = math.floor(math.sqrt(distance))

    sqrt = sqrt_root**2
  
    if distance <= 3:  
        count = distance
  
    elif distance == sqrt:
        count = (sqrt_root*2)-1
  
    elif sqrt < distance <= sqrt_root + sqrt:
        count = (sqrt_root*2)
  
    elif sqrt_root + sqrt < distance:
        count = (sqrt_root*2)+1

    result.append(count) 

for k in result: 
  print(k)