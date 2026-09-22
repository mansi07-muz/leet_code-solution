class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        sol=[]
        for op in operations:
            if(op=="C"):
                del sol[-1]
            elif(op=="D"):
                sol.append(2*sol[-1])
            elif(op=="+"):
                sol.append(sol[-1]+sol[-2])
            else:
                sol.append(int(op))
        total=sum(sol)
        return total
        