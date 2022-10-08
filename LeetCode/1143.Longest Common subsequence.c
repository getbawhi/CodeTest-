//메모이제이션 

int lcs(char * text1, char * text2, int m, int n, int memo[1001][1001]){
    
 
   
   
    int cmp, cmp2;
    
    if(memo[m][n] != -1) {return memo[m][n];}
    
    if(m==0 || n==0)
    {
        memo[m][n]=0;
        
        return 0;}
    
    
    if(text1[m-1]==text2[n-1])
    {
        memo[m][n]= 1 + lcs(text1,text2,m-1,n-1,memo);
        return (1 + lcs(text1,text2,m-1,n-1,memo));
        
    }
    
    else 
    {   
        cmp = lcs(text1,text2,m-1,n,memo);
        cmp2 = lcs(text1,text2,m,n-1,memo);
    }
        
        
        
    if(cmp>=cmp2) 
    {
        memo[m][n] = lcs(text1,text2,m-1,n,memo);
        return cmp;
            
    }
        
    else 
            
    {
        memo[m][n] = lcs(text1,text2,m,n-1,memo);
        return cmp2;
    }
    
    

    
    
 
    
    
}


int longestCommonSubsequence(char * text1, char * text2){
    
    int memo[1001][1001];
    int m = strlen(text1);
    int n = strlen(text2);
    
    for(int i=0; i<1001; i++)
    {
        for(int j=0; j<1001; j++)
        {
            memo[i][j]=-1;
        }
    }
    
    return lcs(text1,text2,m,n,memo);
    
    
    
    
    
    
    

}
