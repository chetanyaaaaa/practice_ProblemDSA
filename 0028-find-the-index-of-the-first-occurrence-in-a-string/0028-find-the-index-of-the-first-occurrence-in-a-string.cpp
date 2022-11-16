class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i =0;i<haystack.size();i++){
            int temp=i;
            int idx = -1;
            for(int j=0;j<needle.size();j++){
                if(haystack[i]==needle[j]){
                    if(idx==-1){
                        idx=i;
                   
                    }
                    
                    
                         i++;
               
                    
                    
                }
                
                 else{
                     idx = -1;
                     break;
                }
                
                
            }
            
            if(idx!=-1){
                return idx;
                break;
            }
            else{
                i = temp;
            }
        }
        return -1;
    }
};