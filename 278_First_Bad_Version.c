/*
Runtime: 0 ms, faster than 100.00% of C online submissions for First Bad Version.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for First Bad Version.
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int le = 1;
    int rt = n;
    int mid;
    
    while(le < rt)
    {
        mid = le + (rt - le) / 2;
        
        if(isBadVersion(mid))
        {
            rt = mid;
        }
        else
        {
            le = mid + 1;
        }
    }
    
    return le;
}
