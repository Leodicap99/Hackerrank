question link:-https://www.hackerrank.com/contests/ece-cpc-final/challenges/teja-dream-order/problem

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> dict={45,25,18,1,7,33};
    vector<int> f={0,0,0,0,0,0};
    for(int x:arr)
    {
        if(x==45)f[0]++;
        else if(x==25 && f[1]<f[0])f[1]++;
        else if(x==18 && f[2]<f[1])f[2]++;
        else if(x==1 && f[3]<f[2])f[3]++;
        else if(x==7 && f[4]<f[3])f[4]++;
        else if(x==33 && f[5]<f[4])f[5]++;
    }
    cout<<n-6*f[5];
    return 0;
}
