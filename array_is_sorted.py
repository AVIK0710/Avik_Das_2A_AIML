class Solution:
    def isSorted(self, arr) -> bool:
        n = len(arr)
        increasing = decreasing = True
        
        for i in range(1, n):
            if arr[i] < arr[i - 1]:
                increasing = False
            if arr[i] > arr[i - 1]:
                decreasing = False
        
        return increasing or decreasing
        
    	
        



