int sherlockAndAnagrams(string s) {
map<vector<int>,int> map;
int ans=0;
for(int i=0;i<s.size();i++)
{
    vector<int> ch(26,0);
    for(int j=i;j<s.size();j++)
    {
        ch[s[j]-'a']++;
        ans+=map[ch]++;
    }
}
return ans;
}
