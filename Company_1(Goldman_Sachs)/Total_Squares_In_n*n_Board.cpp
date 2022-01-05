/* If n=8 
    Square  
    1x1	     8*8 =	64
    2x2	     7*7 =	49   
    3x3	     6*6 =	36
    4x4	     5*5 = 	25   ---->>>>   8^2 + 7^2 + 6^2 + 5^2 + 4^2 + 3^2 + 2^2 +1^2 =  Sum of squares of first n natural number
    5x5	     4*4 =	16             1^2 + 2^2 +..................n^2 = n * (n+1) * (2n + 1)/6
    6x6	     3*3 = 	9
    7x7	     2*2 =	4 
    8x8	     1*1 =	1
*/

int count(int n)
{
    return (n * (n+1) * (2n + 1)/6) ; 
}