void quaylui(int i, int s){
	int j ; 
	for(j = 1; j <= n ; j++){
		if(A[j] >= C[i - 1] && s + A[j]<= X){
			C[i] = A[j] ; s += A[j] ;
			if(j == s) in(i) ;
			else quaylui(i + 1, s) ;
			s -= A[j] ;
		}
	}
}
