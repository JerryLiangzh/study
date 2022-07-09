	
	
	
	
	lenan=strlen(answer[0]);
	for(i=0;i<=lenan;i++){
		temp[i]=answer[0][i];
	}
	
	for(i=lenan;i>=0;i--){
		printf("%d",temp[i]);	
	} 
	Sleep(1000);
	
	for(int l=0;l<xi-1;l++){
		lenan=strlen(temp);
		
		for(i=0;i<=lenan;i++){
			m[lenan-i-1]=temp[i]+48;
		}
		
		lenan=strlen(answer[l+1]);
		
		for(i=0;i<=lenan;i++){
			n[lenan-i-1]=answer[l+1][i]+48;
		}
		
		
		lenm=strlen(temp);
		lenn=strlen(answer[l+1]);
		if(answer[l+1][lenan]!=0){
			lenn++;
			answer[l+1][lenan+1]=0;
		}////////////////////////////
		printf("\n");
		for(i=0;i<lenm;i++) 
			printf("%d",m[i]);
	
	
		printf("\n");
		for(i=0;i<lenn;i++) 
			printf("%d",n[i]);
		
	Sleep(1000);
	
	
		
	if(strlen(temp)>strlen(answer[l+1])){
		len_max=strlen(temp);
	}
	else{
		len_max=strlen(answer[l+1]);
	} 
		
		
		
	for(i=0;i<lenm;i++){
    	a4[i]=m[lenm-1-i]-'0';
	}
	for(i=0;i<lenn;i++){
    	b4[i]=n[lenn-1-i]-'0';
	}
	int k=0;//²»ÒªÍüÁË
	for(i=0;i<=len_max;i++){
    	c4[i]=a4[i]+b4[i]+k;
    	k=c4[i]/10;
    	c4[i]%=10;
	}
	int flag=0;
	
	printf("\n\nend:\n");
	for(i=len_max;i>=0;i--){
		if(c4[i]){
			flag=1;
		}
		if(flag){
			printf("%d",c4[i]);
		}
			
	}
	if(!flag)
		printf("0");	
		
		
		
		
	for(i=len_max;i>=0;i--){
		if(c4[i]){
			flag=1;
		}
		if(flag){
			temp[i]=c4[i];
		}
			
	}	
		
		
		
	}
