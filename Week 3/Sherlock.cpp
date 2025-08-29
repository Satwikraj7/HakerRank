#include <stdio.h>
#include <string.h>

int main(){
    char s[100005];scanf("%s",s);
    int f[26]={0};
    for(int i=0;s[i];i++) f[s[i]-'a']++;
    int cnt1=0,cnt2=0,val1=0,val2=0;
    for(int i=0;i<26;i++) if(f[i]){
        if(!val1){val1=f[i];cnt1++;}
        else if(f[i]==val1) cnt1++;
        else if(!val2){val2=f[i];cnt2++;}
        else if(f[i]==val2) cnt2++;
        else{printf("NO");return 0;}
    }
    if(!val2|| (cnt1==1&&(val1==1||val1==val2+1)) || (cnt2==1&&(val2==1||val2==val1+1))) printf("YES");
    else printf("NO");
    return 0;
}
