#include<bits/stdc++.h>
using namespace std;
int main(){
// int a[10][10];
// int n;
// cin>>n;
// int sum=0;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];
// }
// }
// for(int li=0;li<n;li++){
// for(int lj=0;lj<n;lj++){
// for(int bi=li;bi<n;bi++){
// for(int bj=lj;bj<n;bj++){

// 				for(int i=li;i<=bi;i++){
// 					for(int j=lj;j<=bj;j++){
// 						sum=sum+a[i][j];
// 					}
// 				}
// 			}
// 		}
// 	}
// }
// cout<<sum<<endl;
int n{};
cin>>n;
pair<int,int> a[n];
int tot{};
for(int i=0;i<n;i++) cin>>a[i].second;
for(int i=0;i<n;i++) 
	{
		cin>>a[i].first;
		tot+=a[i].first;
	}
	sort(a,a+n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i].first<<" "<<a[i].second;
	}
return 0;
}