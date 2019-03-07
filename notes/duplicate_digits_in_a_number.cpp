int repeat(int x){
	int occurances = 0;
	while(x > 0){
		if(occurances & 1 << (x %10)) return 1;
		occurances |=1 << (x % 10);
		x = x/10;
	}
	return 0;
}
