
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<ll,ll>p;
    p.first=a[0],p.second=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>p.second){
            p.second=a[i];
        }
        if(a[i]<p.first){
            p.first=a[i];
        }
    }
    return p;
}
