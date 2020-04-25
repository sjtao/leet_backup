/*
//Runtime: 24 ms, faster than 91.72% of Python3 online submissions for Pascal's Triangle II.
//Memory Usage: 13.8 MB, less than 7.69% of Python3 online submissions for Pascal's Triangle II.

//python3
class Solution(object):
    def getRow(self, rowIndex: int) -> List[int]:
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        row = [1]
        for k in range(1, rowIndex + 1):
            entry = row[k-1] * (rowIndex - k + 1) // k 
            row.append(entry)
        return row 
 */

/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Pascal's Triangle II.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Pascal's Triangle II.
*/
int* getRow(int rowIndex, int* returnSize){
    
    int *Pascal = malloc((rowIndex+1) * sizeof(int));
    
    //pascal numbers for N: coefficients of (a+b)^(N-1)     n choose i
    Pascal[0] = 1;
    Pascal[rowIndex] = 1;
    
    int mid = rowIndex / 2;
    int i = 1, j = rowIndex-1;
    
    while(i <= mid && i <= j)
    {
        Pascal[i] = (long) Pascal[i-1] * (rowIndex + 1 - i) / i;  //(n,k) = (n,k-1)*(n-k+1)/k
        Pascal[j] = Pascal[i];
        i++;
        j--;
    }
    
    *returnSize = rowIndex + 1;
    
    return Pascal;
}
