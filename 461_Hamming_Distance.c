/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Hamming Distance.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Hamming Distance.
*/

int hammingDistance(int x, int y){

    int cnt = 0;
    int xt, yt;
    while(x != 0 || y!= 0)
    {
        xt = x % 2;
        yt = y % 2;
        cnt += (xt ^ yt);
        x = x / 2;
        y = y / 2;
    }
    
    return cnt;
}
