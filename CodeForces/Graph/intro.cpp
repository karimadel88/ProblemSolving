#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}
const int N = 10;
bool adjMatrixBool [N][N];
bool adjMatrixCost [N][N];
// Adjacency lists
vector< vector<int> > adjList1;		
vector< vector< pair<int, int> > > adjList2;	// cost relation (node, cost): Select 1 of multiple edges


int main () {
    fast();
    int n;

    // To represent exist or no
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            int b;
            cin>>n;
            adjMatrixBool[i][j];
        }
    }

    // To represent Cost
    cin>>n;
	for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
		int b;
        // b as cost;
        // cost not enter must be zero value
		cin>>b;
		adjMatrixCost[i][j] = b;
	}

    // To represent Cost but about number of edges

    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++){
        int from,to,cost;;
        cin>>from>>to>>cost;
        adjMatrixCost[from][to] = cost;
        // To specify minmum value whent it repeat
        // Condition : => must intitalize value with maximum type of data
        // adjMatrixCost[from][to] = min(adjMatrixCost,cosr);
        // If Graph indirected ==> from to (to from)
    }

    // Let's keep edge with min cost;

	/*
		3
		2	1 2
		1	2
		2	0 1
	 */
	cin>>n;
	adjList1 = vector< vector<int> >(n);
	for(int i=0;i<n;i++){
		int start;
		cin>>start;
		for(int j=0;j<n;j++){
			int to;
			cin>>to;
			adjList1[i].push_back(to);
		}
	}

    /*
		3
		2	1 13	2 4
		1	2 9		3 -4
		2	0 -7	1 8
	 */

	cin>>n;
	adjList2 = vector< vector< pair<int, int> > >(n);
	for(int i=0;i<n;i++){
		int start;
		cin>>start;
		for(int j=0;j<n;j++){
			int to,cost;
			cin>>to>>cost;
			adjList2[i].push_back(make_pair(to,cost));
		}
	}



}