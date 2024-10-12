 #include <stdio.h>
 
 void populate(unsigned char *vec, int num, int limit){
    for(int i = 0; i < num; i++){
        *(vec + i) = rand() % limit;
    }
 }


 int check(int x, int y, int z){
    if(x < y && y < z){
        return 1;
    }
    return 0;
 }


 void inc_nsets(){
    static int nsets = 0;
    nsets++;
    printf("nsets: %d\n", nsets);
 }


 void num_sets(unsigned char *vec, int num){

    for(int i = 0; i < num - 2; i++){
        if(check(*(vec + i), *(vec + i + 1), *(vec + i + 2)) == 1){
            inc_nsets();
        } else {
            continue;
        }
    }
 }