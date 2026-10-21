class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five=0; ten=0; twenty=0
        for x in bills:
            if x==5:
                five+=1
            elif x==10:
                if five>0:
                    five-=1
                    ten+=1
                else:
                    return False
            else:
                if five>0 and ten>0:
                    ten-=1
                    five-=1
                    twenty+=1
                elif ten==0 and five>2:
                    five-=3
                    twenty+=1
                else:
                    return False
        

        return True