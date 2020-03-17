/*
// 以迴圈檢查是否為3的次方數
bool isPowerOfThree(int n){
    // 除了1，3以下的都不是3的倍數
    if(n<3 && n!=1){return false;}
    else if(n == 1){return true;}
    // 若此數是3的次方數，那此數的因數也只有3
    // 第一個先濾掉因數中完全沒有3的，除一次就有餘數的就是了
    if(n%3){return false;}
    // 再來檢查因數中有3的值，一直求餘數及商，直到有餘數出現
    // 若餘數一直為0，那就檢查直到n<=3為止
    // 如有餘數 !(有值)為false
    // 如無餘數 !(0)為true
    else{while(!(n%3) && n>3){n/=3;}}
    return !(n%3);

}
*/
/*
// 以次方和log關係檢查
bool isPowerOfThree(int n){
    // 除了1，3以下的都不是3的倍數
    if(n<3 && n!=1){return false;}
    // 3^n = log3(n) = logb(n) / logb(3)，但其中因log算出來是double
    // 如用(int)強制轉型相當於無條件捨去，ex:4.9999轉成4
    // 改用round即回傳四捨五入double型態的整數，透過上面即可求出次方數
    // 次方數若取四捨五入前不接近整數則取round後再求3的pow必不為原來數
    return pow(3,round(log(n) / log(3.0))) == n;
}
*/
bool isPowerOfThree(int n){
    // 正int中最大的3次方數是3^19，(log3(INT_MAX))，
    // 其中1162261467為3次方數，若n也為3次方數，則1162261467 % n必為0
    // 其中取最大的3次方數想像成正int中最多3的因數，就是將n中所有3的因數對消
    // 如對消到最後還有值則取餘數也一定有值，取最大才能適用所正數
    return n>0 && 1162261467 % n == 0;
}
