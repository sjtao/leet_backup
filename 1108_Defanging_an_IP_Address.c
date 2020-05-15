/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Defanging an IP Address.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Defanging an IP Address.
*/

char * defangIPaddr(char * address){

    int len = strlen(address);
    char *ans = malloc((len+7)*sizeof(char));
    int i;
    int j = 0;
    for(i = 0; i < len; i++)
    {
        if(address[i] == '.')
        {
            ans[j++] = '[';
            ans[j++] = '.';
            ans[j++] = ']';
        }
        else
        {
            ans[j++] = address[i];
        }
    }
    ans[j] = '\0';
    return ans;
}
