def FirstFactorial(num): 

    # code goes here 
    for x in range(1, num):     #
        num = num*x             #
    return num
    
# keep this function call here  
print FirstFactorial(raw_input())
