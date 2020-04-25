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
