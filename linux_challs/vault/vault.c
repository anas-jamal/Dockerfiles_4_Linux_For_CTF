#include<stdio.h> 
#include<string.h>

int main(int argc,char* argv[]){
        
        int a = 8000;
        int b = 600;
        int c = 200;
        int d = 6;
        int e = a + b + c - d; // 8794
    
        char new[10];
        sprintf(new, "%d", e);

        char flag[50] = "A79Lo6W?O%;D;Qh1NIbJ0lp]#F^no;F)tr9Ci!p(+X)7@";
        if(argc > 1 && (strcmp(argv[1],new) == 0)){
                printf("\nVault Unlocked :%s \n",flag);
                    
}       else 
        { 
                printf("\nwrong pin: %s\n",argv[1]); 
                 
        } 
        return 0; 
}
