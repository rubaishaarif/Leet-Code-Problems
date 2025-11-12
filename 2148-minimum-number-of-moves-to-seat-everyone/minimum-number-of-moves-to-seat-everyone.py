

class Solution:
   
    def minMovesToSeat(self, seats, students):
        
       
        seats.sort()
        students.sort()
        
        total_moves = 0
        N = len(seats)
        
        
        for i in range(N):
           
            moves_for_pair = abs(seats[i] - students[i])
            
            total_moves += moves_for_pair
            
        return total_moves


        