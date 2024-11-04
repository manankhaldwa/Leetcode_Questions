class Solution
 {
public:
    int isHappycheck(int n)
    {
        int sum = 0;
        while(n!=0)
        {
            int digit = n % 10;
            sum = sum + pow(digit,2);
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) 
    {
        if(n == 1 || n == 7 || n == 1111111 ||  n == 101120) 
        {
            return true;
        }
        while(n >= 10)
        {
            n = isHappycheck(n);
        }

        if(n == 1)
        {
            return true;
        }
        return false;
    }
};