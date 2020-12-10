#include <stdio.h>
int main(){
    int trau_dung, trau_nam, trau_gia;
    for(trau_dung = 1; trau_dung <= 20; trau_dung++){
        for(trau_nam = 1; trau_nam <= 33; trau_nam++){
            trau_gia = 100 - trau_dung - trau_nam;
            if (trau_dung * 15 + trau_nam * 9 + trau_gia == 300){
                printf("Trau dung = %d, trau nam = %d, trau gia = %d\n",trau_dung,trau_nam,trau_gia);
            }
        }
    }
    return 0;
}
