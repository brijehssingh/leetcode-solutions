class Solution {
public:

 string check( string s , int m , string temp ){


      int n = temp.size();
       int i =0; 
       int j =0 ;
        

        string ans = "";
         
        while(i < m && j < n && s[i] == temp[j]){

        ans+=s[i];
i++;
j++;
        }
        
            return ans;
             
        
      


 }
 
   
    string longestCommonPrefix(vector<string>& strs) {

     int n = strs.size();
      
       if(!n) return ""; 

   string temp = strs[0];
    
    for(int i = 1 ;i<n;i++){
      
    string s = strs[i];

        int m= (int)s.size();
         
     temp = check(s , m ,temp );
   
     if (temp.empty()) break;

     
      

    }
return temp;
 
            
    }
};