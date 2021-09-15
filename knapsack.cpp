int knapsack(int v[],int w[],int n,int W){
	int ans[n+1][W+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<W+1;j++){
			if(i==0||j==0) ans[i][j]=0;
			else{
				if(j>w[i-1]) ans[i][j]=ans[i-1][j];
				else{
					ans[i][j]=max(ans[i-1][j],v[i-1]+ans[i-1][j-w[i-1]]);
				}
			}
		}
	}
	return ans[n][W];
}
