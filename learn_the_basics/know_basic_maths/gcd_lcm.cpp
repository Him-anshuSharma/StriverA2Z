#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long _gcd = gcd(A,B);
        long long lcm = A*B/_gcd;
        vector<long long> result;
        result.push_back(lcm);
        result.push_back(_gcd);
        return result;
        
    }
    
    long long gcd(long long a, long long b){
        if(b == 0)
            return a;
        return gcd(b,a%b);
    }
};

int main(){
    return 0;
}