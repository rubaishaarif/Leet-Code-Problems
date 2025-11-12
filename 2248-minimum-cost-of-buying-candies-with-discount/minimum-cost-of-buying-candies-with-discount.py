
class Solution:
   
    def minimumCost(self, cost):
    
        cost.sort()
        
        total_cost = 0
        N = len(cost)
      
        for i in range(N):
           
            index_from_end = N - 1 - i
          
            if (index_from_end + 1) % 3 != 0:
                total_cost += cost[i]
                
        return total_cost


        