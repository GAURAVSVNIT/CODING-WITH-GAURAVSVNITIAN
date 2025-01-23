# Problem : Codedocs Admin Psycho
# Codedocs team arrange a party and all codedocs members are very excited. All the members of the team are in a queue. The admin is psycho and has less time to arrange the people so he ordered to stand in a queue according to height. Now how many minimum swaps required to arrange them in that order.
# Let Height of team members is 4, 3, 2, 1
# Then 1 swap to 4
# and then 3 swap to 2
# so minimum number of swaps: 2.
# SAMPLE INPUT
# 4
# 4 3 2 1
# SAMPLE OUTPUT
# 2

size = int(input())
list1 = input().split()

if (len(list1) != size):
    print('invalid')    
else:
    for i in range(0,size):
        list1[i] = int(list1[i])
    
    list_sort = [0]*size
    
    for i in range(0,size):
        list_sort[i] = list1[i]
    
    list_sort.sort()
    
    firstindex = 0
    lastindex = size-1
    
    count = 0
    
    while(list_sort != list1):
        mini = min(list1)
      
        if(mini !=  list1[firstindex]):
            
            index_of_mini = list1.index(mini)
            temp = list1[firstindex]
            list1[firstindex] = list1[index_of_mini]
            list1[index_of_mini] = temp
            
            list1.pop(0)
            list_sort.pop(0)
         
            count += 1
        else:
            pass
            

    print(count)
    
