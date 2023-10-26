#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <map>
#include <deque>
using namespace std;

int main() {
/*============================================================*/
/*=========================ALGORITHMS=========================*/
/*============================================================*/

/*=========BUBBLE SORT========*/

/*
//int length= sizeof(arr) / sizeof(int); es im shemtxvevashi tu gvinda rom gavigot array s sigrdze. length() function ar mushaobs array ze 

int n,i,j,a[100];
bool p;

srand(time(0));
for(i=0;i<8;i++){
		a[i]=10+rand()%31;	
		cout<<setw(4)<<a[i];
}

cout<<endl;

for(i=0;i<8-1;i++){
	for(int j=0;j<8-1;j++){
		if(a[j]<a[j+1]){
			swap(a[j],a[j+1]);	
		}
	
	}	
}
   
cout<<endl;
for(i=0;i<8;i++){
	cout<<setw(4)<<a[i];
}


/*=========BUBBLE SORT========(gamartivebuli)*/
/*
int n,i,j,a[100];
bool p=false;

srand(time(0));
for(i=0;i<8;i++){
		a[i]=10+rand()%31;	
		cout<<setw(4)<<a[i];
}

cout<<endl;

for(i=0;i<8-1;i++){
	p=false;
	for(int j=0;j<8-i;j++){
		if(a[j]<a[j+1]){
			swap(a[j],a[j+1]);	
			p=true;
		}
	}	
	if(p=false) break;
}
       
cout<<endl;
for(i=0;i<8;i++){
	cout<<setw(4)<<a[i];
} 

/*=========SELECTION SORT========*/
/*
int i,n, k,j,a[101],mx;
cin>>n;
for(i=0;i<n;i++){
	cin>>a[i];
}

for(i=0;i<n-1;i++){
	mx=a[i];
	k=i;
	for(j=i+1;j<n;j++){
		if(mx<a[j]){
			mx=a[j];
			k=j;
		}
	}
	swap(a[k], a[i]);
}

for(i=0;i<n;i++){
	cout<<a[i]<<" ";
}


/*=========BINARY_SEARCH========*/
/*
//         0 1 2 3 4 5 6 7 8 9
 int a[]={10,9,8,6,5,4,3,2,1,0};
int x=8,l=0,r=10-1,m;
bool p=false;

while(l<r &&p==false){
m=(l+r)/2;

	if(a[m]==x){
		p=true;	
	}
	else if(a[m]>x){
		l=m+1;
	}
	else{
		r=m-1;
	}

}

if(p==true)cout<<"YES"<<" "<<m;
 else cout<<"NO";
*/
//=========BINARY_SEARCH========(martivi xerxi)
/*
//         0 1 2 3 4 5 6 7 8 
 int a[9]={9,8,6,5,4,3,2,1,0};

int x=4,l=0,r=9-1,m;

while(l<r){
m=(l+r)/2;
	if(a[m]>x){
		l=m+1;
	}
	else{
		r=m;
	}
}
if(a[r]==x )cout<<"YES"<<" "<<m;
 else cout<<"NO";
a[r]==x ? cout<<"YES"<<" "<<r : cout<<"NO";


/*=========INSERTION SORT========*/
/*
int a[100],n,i,j;

cin>>n;
for(i=0;i<n;i++){
	cin>>a[i];
}

for(i=0;i<n;i++){
	int current=a[i];
	int j=i+1;
	while(j>=0&&a[j]>current){
		a[j+1]=a[j];
		j++;
	}	
	a[j+1]=current;
}


for(i=0;i<n;i++){
	cout<<setw(4)<<a[i];
}


/*=========INSERTION SORT using binary search========*/
/*

 int a[9]={9,8,6,5,4,3,2,1,0};
 int j,i,mid,left,right,current,k;
 
for(i=0;i<9-1;i++){
	left=0;
	right=i;
while(left<right){
	mid=(left+right)/2;
	if(a[mid]>a[i]){
		left=mid+1;
	}
	else{
	right=mid;
	}
}
 k=right;
	current =a[i];	
for(j=i;j>=k+1;j--){
	a[j]=a[j-1];
}
a[k]=current;
}


/*========Finding all divisors of number with determining primality of number-algorithm=========*/

/*c
string p="Primme Number";
int b[100],i,arr,k;
cin>>arr;
b[0]=1;
b[1]=arr;
k=1;
for(i=2;i<=arr/2;i++){
	if(arr%i==0){
		k++;
		b[k]=i;
		p="Composed Number";
	}
}
cout<<endl<<p<<endl;
for(i=0;i<k;i++){
	for(int j=0;j<k;j++){
		if(b[j+1]<b[j]) swap(b[j],b[j+1]);
	}
}

for(i=0;i<=k;i++){
cout<<b[i]<<" ";

}
*/


/*
int i,a[100],k=1,mx,p;
long long int t;
cin>>t;
a[0]=1;
a[1]=t;
for(i=2;i<=t/2;i++){
	if(t%i==0) {	
		k++;
		a[k]=i;
	}
}
for(i=0;i<=k-1;i++){
	mx=0;
	for(int j=i;j<=k;j++){
		if(mx<a[j]){
			mx=a[j];
			p=j;
		}
	}
	
	swap(a[i],a[p]);
}


for(i=0;i<=k;i++){
	cout<<a[i]<<" ";
}
*/
/*===============================================
============Second course Algorithms=============
=================================================*/

//int n,x,i,k=-1,a[1001];
//cin>>n>>x;
/*
for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]==x){
		k=i;
		break;
	}	
} 
if(k>=0)cout<<endl<<"YES:"<<k;
else cout<<endl<<"NO";
*/
/*
for( i=0;i<n;i++){
	cin>>a[i];
}

a[n+1]=x;
i=0;
while(a[i]!=x){
	k=i;
	i++;
}
if(k==n)cout<<endl<<"NO";
else cout<<endl<<"YES:"<<k+1;
*/

/*
int b[1001];

for( i=0;i<n;i++){
	cin>>a[i];
	if(a[i]==x){
		k++;
		b[k]=i;
	}
}
for(i=0;i<=k;i++){
	cout<<b[i]<<" ";
}
*/

/*
for( i=0;i<n;i++){
	cin>>a[i];
}
int mx=a[0];
for( i=0;i<n;i++){
	if(mx<a[i]){
		mx=a[i];
	}
}
cout<<endl<<"MAX="<<mx;
*/
/*========dividing number into prime multipliers-algorithm=========*/
/*
int k=-1,a,d,b[10001];
cin>>a;
d=2;
while(a>1){
	if(a%d==0){
		k++;
		b[k]=d;
		a=a/d;
	}else if(d==2){
		d++;	
	}else {
		d+=2;
	}	
}
for(int i=0;i<=k;i++) cout<<b[i]<<" ";
}
/*========Eratosthenes sieve-algorithm =========*/
/*
int i,n,j,b[10001];
cin>>n;
n=(n+1)/2;
b[1]=2;
for(i=2;i<=n;i++){
	b[i]=2*i-1;
}
j=2;
while(j<=n){
i=j+b[j];
	while(i<=n){
		b[i]=0;
		i=i+b[j];
	}
j++;
	while(b[j]==0&&j<=n) j++;	
}

for(i=1;i<=n;i++){
	cout<<setw(3)<<b[i];
}
/*========Euclid�s Algorithm=========*/
/*
Greatest Common Divisor=GCD
Finding The Smallest Common Multiple=SCM
	a*b=GCD*SCM
	SCM=(a*b)/GCD
*/

/*
int a,b,GCD,SCM,currA,currB;
cin>>a>>b;
currA=a;
currB=b;
while(a!=0&&b!=0){
	if(a>b){
		a=a%b;
	}else b=b%a;
	GCD=a+b;
}
SCM=currA*currB/GCD;
cout<<"GCD="<<GCD<<endl<<"SCM="<<SCM;
*/
/*=========long Number Save Algorithm========*/
/*
int n,a,i,b[200],d;
//cin>>n;
for(i=0;i<200;i++){
b[i]=0;
}
a=1;
k=100;
for(i=0;i<100;i++){
	a=a*i;
	d=a/10;
	b[k]=d;
}
/*=========Transformation of the ordinary 
representation of numbers into tabular representation========*/
/*
int n,i,b[100],k;
cin>>n;
k=-1;
while(n>=1){
	k++;
	b[k]=n%10;
	n/=10;	
}

for( i=0;i<=k;i++){

	cout<<b[i]<<" ";
}

/*=========Transformation into tabular 
representation in direct order========*/
/*
int n,i,b[100],k,l;
cin>>n;
k=-1;
l=n;


while(n>=1){
	n=n/10;
	k++;	
}

int m=k;

while(k>=0){
	b[k]=l%10;
	l=l/10;
	k--;
}

for( i=0;i<=m;i++){
	cout<<b[i]<<" ";
}


/*=========Transformation of the tabular
 representation of numbers into ordinary representation
 (am shemtxvevashi piriqit roca masivshia elementebi da unda 
 agvadginot rogorc erti ricxvi)========*/
/*
int n,i,b[100],k,r,a=0;
cin>>n;
for( i=0;i<n;i++){
	cin>>b[i];
	a=a*10+b[i];
}

//r=1; 
//for(i=0; i<n; i++) { 
//	a=a+b[i]*r; 
//	r=r*10; 
//}

cout<<a;

/*=================*/





	return 0;
}
