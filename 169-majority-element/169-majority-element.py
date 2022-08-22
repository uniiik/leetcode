class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        from collections import Counter
        hashmap=Counter(nums) #count occurence of number of elements of nums
        return max(hashmap,key=hashmap.get)#get key of most common element
        