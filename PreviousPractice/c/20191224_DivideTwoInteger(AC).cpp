


int divide(int dividend, int divisor) {

        long long b = dividend, a = divisor;    //    we will find b/a, long long for overcoming bits overflow;
        bool sign, signa, signb;

        if(a>0) signa=0; else signa=1;          //  getting sign for operands,
        if(b>0) signb=0; else signb=1;

        sign = signa ^ signb;        //    determine sign of the quotient, exclusive or

        if(signa) a = -a;            // removing sign of operands
        if(signb) b = -b;

        long long q=0, t=0, r=1;    // q to store the quotient, t for accumulating values for the division process
        
        for (int i = 31; i >= 0; i--)               // checking with highest bit
            if ( (t + (a << i) ) <= b) {
                t += (a << i);                  //  accumulating the values for dividend
                q |= (r << i);                  //  accumulating the values for quotient
            }
        
    if (sign) q = -q;       //  assigning back the sign

    return (q >= INT_MAX || q < INT_MIN) ? INT_MAX : q;     //  according to problem definition.
}

/*
Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero.

Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Note:

Both dividend and divisor will be 32-bit signed integers.
The divisor will never be 0.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.
*/

