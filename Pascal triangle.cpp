#include<iostream>
using namespace std;
	
int c[10][10],n,i,j,ch,girl,boy;float sum=0.0,total=0.0,result;int n2,x,h;float total1,sum1,result1;
	
void fun1() 
 {
    cout<<"\nHOW MANY CHILDREN "; 	
	cin>>ch;
	cout<<"\n1.EXACTLY\n2.ATLEAST\n3.ATMOST\n\n";  
	int t;
	cin>>t;  
	
	
	if(t==1)
	{  
	
	cout<<"\nWANT TO FIND PROBABILITY OF BOY(1) OR GIRL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nHOW MANY BOYS ";
	cin>>boy;
	girl=ch-boy;
	} 
	else if(x==2)
	{  
	cout<<"\nHOW MANY GIRLS - "; 
	cin>>girl;
	boy=ch-girl;          
	}
	
	else 
    {
    cout<<"\n\nWRONG CHOICE\n";
	exit(0);	
	}
	
	
	for(int k=0 ;k<=ch;k++)  
	{	
	total=total+c[ch][k]; 

    }
    sum=c[ch][boy]; 
	
	result=(sum)/total;
	
	
	

	
	for(i=0;i<=ch;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	
	for(int p=0;p<=(2*boy);p++)
	cout<<" ";
	cout<<"^\n";
	for(int p=0;p<=(2*boy);p++)
	cout<<" ";
	cout<<"|\n";
	
	
	
	
	
	
	
	 
	if(x==1)
	{
		
 
	cout<<"\nPROBABILITY OF GETTING  EXACTLY "<<boy<<" BOYS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";   
    }
    if(x==2) 
	{
	cout<<"\nPROBABILITY OF GETTING  EXACTLY "<<girl<<" GIRS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";   
    }	
	}
	
	else if(t==2)
	{ 
	 
	cout<<"\nWANT TO FIND PROBABILITY OF BOY(1) OR GIRL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nATLEAST HOW MANY BOYS ";
	cin>>boy;
	girl=ch-boy;
	for(int k=0;k<=ch;k++)  
	{	
	total=total+c[ch][k]; 
    }
    for(int j=boy;j<=ch;j++)   
    sum=sum+c[ch][j];  
	}
	if(x==2)
	{
	cout<<"\nATLEAST HOW MANY GIRLS - ";  
	cin>>girl;
	boy=ch-girl;
	for(int k=0;k<=ch;k++)  
	{	
	total=total+c[ch][k]; 
    }
    for(int j=girl;j<=ch;j++)    
    sum=sum+c[ch][j];          
	} 
	
	
	result=(sum)/total; 
	if(x==1)
	{
	
	
	for(i=0;i<=ch;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	
	for(int p=0;p<=(2*boy);p++) 
	cout<<" ";
	for(int p=0;p<=2*girl+1;p++) 
	cout<<"-";
	cout<<">\n";	 
			
	cout<<"\nPROBABILITY OF GETTING  ATLEAST "<<boy<<" BOYS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";    
    }
    if(x==2) 
	{
	


	
	for(i=0;i<=ch;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	
	for(int p=0;p<=(2*boy);p++) 
	cout<<" ";
	for(int p=0;p<=2*girl+1;p++) 
	cout<<"-";
	cout<<">\n";	 
		
	cout<<"\nPROBABILITY OF GETTING  ATLEAST "<<girl<<" GIRS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";    
    }	
	}
	
	
	
	
	else if(t==3)
	{ 
	 
	cout<<"\nWANT TO FIND PROBABILITY OF BOY(1) OR GIRL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nATMOST HOW MANY BOYS ";
	cin>>boy;
	girl=ch-boy;
	for(int k=0;k<=ch;k++)  
	{	
	total=total+c[ch][k]; 
    }
    for(int j=0;j<=boy;j++)   
    sum=sum+c[ch][j];  
	}
	if(x==2)
	{
	cout<<"\nATMOST HOW MANY GIRLS - ";  
	cin>>girl;
	boy=ch-girl;
	for(int k=0;k<=ch;k++)  
	{	
	total=total+c[ch][k]; 
    }
    for(int j=0;j<=girl;j++)     
    sum=sum+c[ch][j];          
	} 
	

	
	
	result=(sum)/total; 
	if(x==1)
	{

    	
	for(i=0;i<=ch;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
		
	for(int p=0;p<=(2*boy);p++) 
	cout<<"-";
	cout<<">\n";              
         
	cout<<"\nPROBABILITY OF GETTING  ATMOST "<<boy<<" BOYS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";    
    }
    if(x==2) 
	{
		
	for(i=0;i<=ch;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
		
	for(int p=0;p<=(2*girl)+1;p++) 
	cout<<"-";
	cout<<">\n";
		
	cout<<"\nPROBABILITY OF GETTING  ATMOST "<<girl<<" GIRS WHEN THERE ARE  "<<ch<<" CHILDREN IN THE FAMILY IS "<<result*100<<"%";    
    }	
	}
	
	else 
	{
	cout<<"\n\nWRONG CHOICE\n";
	exit(0);	
	}
    }
    
    
    
 
        
 
	void fun2()
    {  
	cout<<"\n\nHOW MANY COINS ARE TOSSED - ";
	cin>>n2;
	cout<<"\n1.EXACTLY\n2.ATLEAST\n3.ATMOST\n\n";  
	int t;
	cin>>t; 
	
	
	if(t==1)
	{
	 
	cout<<"\nWANT TO FIND PROBABILITY OF HEAD(1) OR TAIL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nHOW MANY HEADS - ";
	cin>>h;
	}
	if(x==2)
	{
	cout<<"\nHOW MANY TAILS - "; 
	cin>>h;	
	} 
	for(int k=0;k<=n2;k++)   
	{	
	total1=total1+c[n2][k];
	}
	 
	sum1=c[n2][h];     
	
	result1=sum1/total1;
	
	
	for(i=0;i<=n2;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	
	for(int p=0;p<=(2*h);p++)
	cout<<" ";
	cout<<"^\n";
	for(int p=0;p<=(2*h);p++)
	cout<<" ";
	cout<<"|\n";
	
	
	
	
	if(x==1) 
	{ 
	cout<<"\nPROBABILITY OF FINDING EXACTLY   "<<h<<" HEADS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}   
	if(x==2) 
	{ 
	cout<<"\nPROBABILITY OF FINDING EXACTLY  "<<h<<" TAILS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}
    }
	
	 
    else if(t==2)
    {
    cout<<"\nWANT TO FIND PROBABILITY OF HEAD(1) OR TAIL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nATLEAST HOW MANY HEADS - ";
	cin>>h;
	}
	
	if(x==2)
	{
	cout<<"\nATLEAST HOW MANY TAILS - "; 
	cin>>h;	
	} 
	
	
	
	
	for(int k=0;k<=n2;k++)   
	{	
	total1=total1+c[n2][k];
	}
	
	for(int j=h;j<=n2;j++) 
	sum1=sum1+c[n2][j];      
	
	result1=sum1/total1;
    
	
	
	
	for(i=0;i<=n2;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	
	for(int p=0;p<=(2*h);p++) 
	cout<<" ";
	for(int p=0;p<=2*h;p++) 
	cout<<"-";
	cout<<">\n";	 
		
	
    	
		
	
	if(x==1)
	{ 
	cout<<"\nPROBABILITY OF FINDING ATLEAST   "<<h<<" HEADS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}   
	if(x==2) 
	{ 
	cout<<"\nPROBABILITY OF FINDING ATLEAST  "<<h<<" TAILS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}
    }
	
	                              
	else if(t==3)
    {
    cout<<"\nWANT TO FIND PROBABILITY OF HEAD(1) OR TAIL(2) - ";
	cin>>x;
	
	if(x==1)
	{
	cout<<"\nATMOST HOW MANY HEADS - ";
	cin>>h; 
	}
	if(x==2)
	{
	cout<<"\nATMOST HOW MANY TAILS - "; 
	cin>>h;	
	} 
	for(int k=0;k<=n2;k++)   
	{	
	total1=total1+c[n2][k];
	}
	
	for(int j=0;j<=h;j++) 
	sum1=sum1+c[n2][j];      
	
	result1=sum1/total1;	
	
	
	for(i=0;i<=n2;i++)
	{
	for(j=0;j<=i;j++)  
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
		
	for(int p=0;p<=(2*h);p++) 
	cout<<"-";
	cout<<">\n";    
	
	
	if(x==1)
	{ 
	cout<<"\nPROBABILITY OF FINDING ATMOST   "<<h<<" HEADS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}   
	if(x==2) 
	{ 
	cout<<"\nPROBABILITY OF FINDING ATMOST  "<<h<<" TAILS IS "<<result1*100<<"% WHEN "<<n2<<" COINS ARE TOSSED";
	}
    }
    
    else
    {
    cout<<"\n\nWRONG CHOICE";
	exit(0);	
	}


	} 
	
	
	
	
	
	void fun3()
    {
    int x,y;
	cout<<"\n\nHOW MANY THINGS ARE THERE - ";
	cin>>x;
	cout<<"\n\nHOW MANY SELECTION  - ";
	cin>>y;
	cout<<"\n\nNUMBER OF WAYS YOU CAN SELECT "<<y<<" THINGS FROM "<<x<<" THINGS "<<" ARE "<<c[x][y];  
    } 
	
	
	void fun4()
	{
	int d=0,ndisks=0;
    cout<<"\nHOW MANY DISK - ";
    cin>>d;
    cout<<"\n\n";
    for(i=0;i<=d-1;i++)
	{
	for(j=0;j<=i;j++)
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }  
	for(i=0;i<=d-1;i++) 
	{
	for(j=0;j<=i;j++)
	{
    ndisks=ndisks+c[i][j]; 
	} 
    
       
   } 
    cout<<"\n\nNUMBER OF MOVES REQUIRED TO MOVE "<<d<<" DISKS IS/ARE "<<ndisks; 	
   }
	
	

	
	int main()
	{
		
	cout<<"ENTER ROW ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
	for(j=0;j<=i;j++)
	{	
	if(j==0)
	c[i][j]=1;
	else if (i==j) 
	c[i][j]=1;
	else
	{
	c[i][j]=c[i-1][j-1]+c[i-1][j];
	}     
	}	
	}	
	for(i=0;i<=n;i++)
	{
	for(j=0;j<=i;j++)
	{
	cout<<" "<<c[i][j];	
	}
	cout<<"\n";
    }
	int ch;
	while(1)
	{
	cout<<"\n";     	
	cout<<"\nWHICH ONE 1 - CHILDREN   2 - COIN  3 - COMBINATION  4 TOWE OF HANOI : - ";  
	cin>>ch;        	
	if(ch==1)
	fun1();	
	else if(ch==2)
	{
	fun2();
	}
	else if(ch==3)
	{
	fun3();	
	}
	else if(ch==4)
	{
	fun4();	
	}
	else
	{
	cout<<"\nWRONG CHOICE  \n"; 	
    } 
	}
	
	return 0;
	
    }




    

    
