//Implementation of Bellman Ford Algorithm.
#include<stdio.h>
#include<limits.h>
int main(){
int V,E;
printf("Enter the number of vertices:");
scanf("%d", &V);
printf("Enter the n umber of edges:");
scanf("%d", &E);
int u[E],v[E],w[E];
printf("Enter each edge in the format: u v weight \n");
for(int i=0;i<E;i++){
scanf("%d %d %d", &u[i], &v[i], &w[i]);
}
int source;
printf("Enter the source vertex:");
scanf("%d", &source);
int dist[V]; 
for(int i=0;i<V;i++){
dist[i]=INT_MAX;
}
dist[source]=0;
for(int i=1;i<=V-1;i++){
for(int j=0;j<E;j++){
if(dist[u[j]]!=INT_MAX && dist[u[j]]+w[j]<dist[v[j]]){
dist[v[j]]=dist[u[j]]+w[j];
}}}
int neg_cyc=0;
for(int j=0;j<E;j++){
if(dist[u[j]]!=INT_MAX && dist[u[j]]+w[j]<dist[v[j]]){
neg_cyc=1;
break;}
}
if(neg_cyc){
printf("Graph contains a negative weight cycle\n");
}
else{
printf("No negative weight cycle found.");
printf("Vertex\tDistance from source\n");
for(int i=0;i<V;i++){
if(dist[i]==INT_MAX){
printf("%d\tInfinity\n", i);}
else{
printf("%d\t%d\n", i, dist[i]);
}
}
return 0;
}}
