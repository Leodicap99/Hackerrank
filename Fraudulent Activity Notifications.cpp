int helper(vector<int> count,int d)
{
    for(int i=1;i<201;i++)
    count[i]+=count[i-1];
    int a=0,b=0;
    if(d%2)
    {
        int first=d/2+1;
        for(int i=0;i<201;i++)
        {
            if(first<=count[i])
            {
                a=2*i;
                break;
            }
        }
    }
    else
    {
        int first=d/2,second=d/2+1,i=0;
        for(;i<201;i++)
        {
            if(first<=count[i])
            {
                a=i;
                break;
            }
        }
        for(;i<201;i++)
        {
            if(second<=count[i])
            {
                b=i;
                break;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    return a+b;
}
int activityNotifications(vector<int> e, int d) {
vector<int> count(201);
for(int i=0;i<d;i++)
{
    count[e[i]]++;
}
int ans=0;
for(int i=d;i<(int)e.size();i++)
{
    int x=helper(count,d);
    if(e[i]>=x)ans++;
    count[e[i]]++;
    count[e[i-d]]--;
}
return ans;
}
