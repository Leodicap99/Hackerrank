long countTriplets(vector<long> arr, long r) {
unordered_map<long,long> map2,map3;
long ans=0;
for(long i=0;i<arr.size();i++)
{
    if(map3.count(arr[i]))
    ans+=map3[arr[i]];
    if(map2.count(arr[i]))
    map3[r*arr[i]]+=map2[arr[i]];
    map2[arr[i]*r]++;
}
return ans;
}
