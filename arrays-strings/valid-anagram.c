#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAnagram(char* s, char* t) {
    int i=0;
    int j=0;

    int freq[26]={0};
    
    int l=strlen(s);
    int l2=strlen(t);
    if(l!=l2){
        return false;
    }
    for(i=0;i<l;i++){
        freq[s[i]-'a']++;
    }
    for(j=0;j<l;j++){
        freq[t[j]-'a']--;
    }
    
    for(int k=0;k<26;k++){
        if(freq[k]!=0){
            return false;
        }
        
    }
    return true;


}

int main(void) {
    char s[100], t[100];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s" ,t);

    if (isAnagram(s, t)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}