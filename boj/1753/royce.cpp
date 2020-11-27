#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

typedef vector<vector<pair<int,int> > > Matrix;

Matrix graph(20001);
int INF = 99999999;
vector<int> d(20001, INF);
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > to_visit;
vector<int> previous(20001, -1);
int v_cnt, e, s, i;

int main(){
    scanf("%d %d",&v_cnt,&e);
    scanf("%d",&s);

    for(i=1;i<=e;i++){
      int u,v,w;
      scanf("%d %d %d",&u,&v,&w);
      pair<int, int> asdf (v, w);
      graph[u].push_back(asdf);
    }

    to_visit.push(make_pair(d[s]=0, s));

    while(!to_visit.empty()){
      int m = to_visit.top().second;
      int dist = to_visit.top().first;

      to_visit.pop();

      if(dist > d[m]) continue;

      for(vector<pair<int,int> >::iterator it=graph[m].begin(); it!=graph[m].end(); ++it){
        if(d[it->first] > d[m] + it->second){
          d[it->first] = d[m] + it->second;
          previous[it->first] = m;
          to_visit.push(make_pair(d[it->first], it->first));
        }
      }
    }

    for(i=1;i<=v_cnt;i++){
      if(d[i] == INF) printf("INF\n");
      else printf("%d\n", d[i]);
    }
    return 0;
}
