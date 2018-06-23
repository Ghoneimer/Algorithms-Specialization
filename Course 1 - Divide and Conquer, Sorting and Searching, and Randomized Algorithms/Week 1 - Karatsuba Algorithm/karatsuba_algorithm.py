import math as mt

def main():
    a1=input('Enter the 1st number: ')
    a=int(a1)
    b1=input('Enter the 2nd number: ')
    b=int(b1)
    n1=getn(a)
    n2=getn(b)
    print('The 1st number size is %d, The second number size is %d'%(n1,n2))
    print('Their product result equals %d' %int(multiply(a,b)))

def getn(n):
    x=mt.log10(n)+1
    return int(x)


def multiply(x,y):
    if(x<10 or y<10):
        return x*y
    
    n1=getn(x)
    n2=getn(y)
    n=max(n1,n2)        
    a1=min(x/(10**(int(n/2))),x*(10**-(int(n/2))))
    a=int(a1)
    b=x-a*(10**int((n/2)))
    c1=min(y/(10**int((n/2))),y*(10**-int((n/2))))
    c=int(c1)
    d=y-c*(10**int((n/2)))
    #print('a=%d b=%d c=%d d=%d '%(a, b, c, d))
    ac=multiply(a,c)
    bd=multiply(b,d)
    adbc=multiply(a+b,c+d)-(ac+bd)
    #print('a=%d b=%d c=%d d=%d ac=%d bd=%d adbc=%d'%(a, b, c, d, ac, bd, adbc))
    #print(n)
    if (n%2==0):
        return(10**n)*ac + (10**int((n/2)))*adbc + bd
    else:
        return(10**(n-1))*ac + (10**int((n-1)/2))*adbc + bd

                          
main()
                                                
                              

