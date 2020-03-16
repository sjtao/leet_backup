// Reference: https://massivealgorithms.blogspot.com/2019/04/leetcode-1025-divisor-game.html

bool divisorGame(int N){
/*
N=even, ax=1, n=n-1,... win
N=odd, lose
*/
    return (N%2 == 0);
}
