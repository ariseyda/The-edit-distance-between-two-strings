#include<stdio.h>
#include<string.h>
#define size 30

/*The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions required to change one string to the other. 
For example, the edit distance between “kitten” and “sitting” is three: substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.
Given two strings, compute the edit distance between them.*/

int main(){
	
	char s1[size];
	char s2[size];
	printf("Enter two words:");
	scanf("%s%s",s1,s2);
	
	int len1=strlen(s1);
	int len2=strlen(s2);
	
	int n=len1;
	int small=len2;
	if(len2<=n){
		n=len2;
		small=len1;
	}
	
	int count=1,a=0;
	
	int i;
	for(i=0;i<n;i++){
		if(len1>len2&&a+1==strlen(s2)){
			a=0;
			
		}
		else if(len2>=len1&&i+1==strlen(s1)){
			i=0;
		}
		if(s1[i]==s2[a]){
			count++;
			
			
		}
		a++;
		if(a>=n){
			break;
		}
	}
	
	int edit=n-count;
	
	if(count==1){
		edit=n+small;
	}
	printf("\nThe edit distance between %s and %s is %d.",s1,s2,edit);
	
	
	
	
	return 0;
}
