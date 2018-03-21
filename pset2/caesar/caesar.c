#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[]){
//argc=argument count argv=argument vector
// Check if command line arguments are 2:
    if(argc==2){
        //convert key stored in argv[1] as a string to integer
        int key=atoi(argv[1]);
        printf("plaintext: ");
        string plaintext=get_string();
        int index=0;
        printf("ciphertext: ");

        for(int i=0;i<strlen(plaintext);i++){
            //Check if character is a letter
            if(isalpha(plaintext[i])){
                //Check if uppercase
                if(isupper(plaintext[i])){
                    //Calculate ciphered character
                    index=((plaintext[i]-65+key)%26+65);
                    printf("%c",index);
                }

                if(islower(plaintext[i])){
                    //Calculate ciphered character
                    index=((plaintext[i]-97+key)%26+97);
                    printf("%c",index);
                }

            }else{
                printf("%c",plaintext[i]);
            }
        }


        printf("\n");
        return 0;

    }else{
        //If user puts a wrong number of command line arguments, show correct usage:
        printf("Usage: ./caesar k\n");
        return 1;
    }

}