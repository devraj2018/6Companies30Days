//  https://www.interviewbit.com/problems/distribute-in-circle/    //

int Solution::solve(int A, int B, int C) {

    if(A%B==0) return (C-1+B)%B;
    
    A= A%B;

    return (A+C-1+B)%B;

}
