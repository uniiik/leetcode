class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        max_count=0
        chunks=0
        n=len(arr)
        for i in range(0,n):
       
            max_count=max(max_count,arr[i])
            
            if(max_count==i):
               
                    chunks+=1
                
   
        
        return chunks