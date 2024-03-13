// Can only reverse a string

    string s="abcd" ;
    reverse(s.begin(),s.end());
    cout<<s; // output "dcba"

    vector<int> v;
    for(int i=0;i<4;i++){
        v.push_back(v);
    }

    reverse(v.begin(),v.end()); // vprint 3 2 1 0