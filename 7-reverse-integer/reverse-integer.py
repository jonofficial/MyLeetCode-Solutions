class Solution:
    def reverse(self, x: int) -> int:
       x=str(x)
       if x[0]!="-":
           if int(x[::-1])>-2147483648 and int(x[::-1])<2147483648:
               return int(x[::-1])
       else:
           x="-"+x[::-1]
           if int(x[0:len(x)-1])>-2147483648 and int(x[0:len(x)-1])<2147483648:
               return int(x[0:len(x)-1])
       return 0