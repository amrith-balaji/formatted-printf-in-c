int main() {
        for (i = 1 ; i <5 ; i++) {
                printf(" %-5d", i);
        }
        printf("\n");
        for (i = 1 ; i < 9 ; i++){
                i = i+1;
                printf(" %-5d",i);
        }
        printf("\n");
        int innit= 3;
        for (i = 1 ; i <5 ; i++) {
                printf(" %-5d", innit);
                innit = innit*innit;
        }
        printf("\n");
        int inni= 4 ;
        for (i = 1 ; i <5 ; i++) {
                printf(" %-5d", inni);
                inni = inni*inni;
        }
        printf("\n");

}
