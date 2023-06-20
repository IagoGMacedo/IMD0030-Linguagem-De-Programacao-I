template <class T> 
T maxMin(T v[], int n, T &ma,T &me){
    me = v[0];
    for(int i =0;i<n;i++){
        if(v[i]>ma){
            //maior
            ma = v[i];
        }
        if(v[i]<me){
            //menor
            me = v[i];
        }
    }
};

int main(){

    return 0;
}