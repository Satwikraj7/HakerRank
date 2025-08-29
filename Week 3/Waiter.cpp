#include <stdio.h>
#include <stdlib.h>

int primes[10000],pc=0;

int isprime(int x){for(int i=2;i*i<=x;i++) if(x%i==0) return 0;return 1;}
void gen(){for(int i=2;pc<10000;i++) if(isprime(i)) primes[pc++]=i;}

int main(){
    int n,q;scanf("%d%d",&n,&q);
    int A[n];for(int i=0;i<n;i++) scanf("%d",&A[i]);
    gen();
    int B[100000],topB=0,C[100000],topC=0;
    for(int i=0;i<q;i++){
        topB=0;topC=0;
        for(int j=n-1;j>=0;j--){
            if(A[j]%primes[i]==0) B[topB++]=A[j];
            else C[topC++]=A[j];
        }
        for(int j=topB-1;j>=0;j--) printf("%d\n",B[j]);
        n=topC;for(int j=0;j<topC;j++) A[j]=C[j];
    }
    for(int j=n-1;j>=0;j--) printf("%d\n",A[j]);
    return 0;
}
