
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

char letter[1000];
char alphabet[26] ={0};
char *pletter;
pletter = &letter[0];

printf("Enter a text: ");
fgets(pletter,sizeof(letter),stdin);

int c = strlen(pletter);

for (int i = 0 ; i < c ; i++ ){
    //filtering the int from the input
    if (isalpha(*(pletter+i))){
        //converting the string to lower
      char c =   tolower(*(pletter+i));

    //doing ascii calculation
        int index = c - 'a';
        // it's like if c - 'a' suppose, c = a then c -a =1 then it's store in alphated index no 1 and it is increament by 1 every time it sees.
        alphabet[index]++;


    }
}
for (int i = 0 ; i < 26 ; i ++){

    if (alphabet[i]>0){   
        printf("%c : %d\n",'a'+i,alphabet[i]);
    }
}
printf("\n");


 return 0;
}
