string biggerIsGreater(string w) {
int k=-1;
for(int i=0;i<w.size()-1;i++)
{
    if(w[i]<w[i+1])
    k=i;
}
if(k==-1)return "no answer";
int l;
for(l=w.size()-1;l>k;l--)
{
    if(w[l]>w[k])break;
}
swap(w[l],w[k]);
reverse(w.begin()+k+1,w.end());
return w;
}
