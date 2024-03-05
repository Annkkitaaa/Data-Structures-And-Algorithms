class Solution {
public:
    double myPow(double x, int n) {
     long long power=n;
     double result=1.0;
     if(power==0) return 1.0;
     if(power==1) return x;
     if(power<0){
         x=1/x;
         power=-power;
     }

      while(power>0){
          if(power%2==1){
              result=result*x;
          }
          x=x*x;
          power=power/2;
      }

      return result;
    }

    
};