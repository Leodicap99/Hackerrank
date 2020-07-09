string isValid(string s) {
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++)
    v[s[i]-'a']++;
    sort(v.begin(),v.end());
    v.erase(remove(v.begin(),v.end(),0),v.end());
    if(v.back()==v.front())return "YES";
    else if(v.back()-v.front()==1 && (v[v.size()-1]!=v[v.size()-2]))return "YES";
    else if(v[0]==1 && v[1]==v[v.size()-1])return "YES";
    return "NO";
}
