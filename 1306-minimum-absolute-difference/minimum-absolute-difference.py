class Solution:
    def minimumAbsDifference(self, arr):
        
        
        if len(arr) < 2:
            return []
            
      
        arr.sort()
        
      
        min_diff = arr[1] - arr[0]
        result = []
        
      
        for i in range(1, len(arr)):
            current_diff = arr[i] - arr[i-1]
       
            if current_diff < min_diff:
                min_diff = current_diff
     
        for i in range(1, len(arr)):
            current_diff = arr[i] - arr[i-1]
            
            if current_diff == min_diff:
              
                result.append([arr[i-1], arr[i]])
                
        return result