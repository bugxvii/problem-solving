## [Leetcode](https://leetcode.com/)

[35. Search Insert Position](https://leetcode.com/problems/search-insert-position/)

### Binary Search
- Time Complexity: O(log(n))
- Space Complexity: O(1)

```java
public class SearchInsertPosition
{
    public static int searchInsert(int[] nums, int target) 
    {
        int low = 0;
        int high = nums.length - 1;
        
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
        }

        return low;
    }
}
```
