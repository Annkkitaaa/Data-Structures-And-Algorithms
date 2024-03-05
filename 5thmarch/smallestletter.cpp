class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char ans='z';
        int count=0;
        for(int i=0;i<n;i++){
          if(letters[i]>target){
             ans=min(letters[i],ans);
              count++;
          }
        }
        
        if(count==0){
            return letters[0];
        }
        else return ans;
        
    }
};