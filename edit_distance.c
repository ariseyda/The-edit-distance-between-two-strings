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
	if(len2<=n){
		n=len2;
	}
	
	int count=len1-len2;
	if(count<0){
		count*=-1;
	}
	
	int i;
	for(i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			count++;
		}
	}
	
	printf("\nThe edit distance between %s and %s is %d.",s1,s2,count);
	
	
	
	return 0;
}
