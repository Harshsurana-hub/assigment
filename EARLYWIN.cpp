#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    
	    int ns ,mv;
	    cin >> ns >> mv;
	    string s;
	    cin >> s;
	    
	    string v ;
	    cin >> v;
	    string ans = "";
	    
	     

int i =0;

while(i < s.length() && i < v.length() && s[i] == v[i]){
   ans += s[i];
    i++;
}
	        
	    cout << ans << endl;
	    
	}

}
