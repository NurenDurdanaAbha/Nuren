#include<stdio.h>
#include<queue>
#include<iostream>

using namespace std;

int main()
{
    int Graph[10][10],n,i,j,source,distance[100], visited[100],a[100],x=1;

    printf("Enter number of vertex: ");
    cin>>n;

    // graph initialization
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            Graph[i][j] = 0;

    // input graph
    printf("\nEnter Graph: \n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>Graph[i][j];

    for(i=0; i<n; i++)
    {
        distance[i] = 0;
        visited[i]  = 0;
    }

    // starting bfs
    printf("\nEnter Source: ");
    scanf("%d",&source);
    cout<<endl;

    visited[source]=1;

    queue <int> Q;
    int u;

    Q.push(source);

    while(!Q.empty())
    {
        u = Q.front();

        for(i=0; i<n; i++)
        {
            if(Graph[u][i]==1 && visited[i]==0)
            {
                distance[i] = distance[u]+1;
                visited[i] = 1;

                a[x++]=i;

                Q.push(i);
            }
        }
        Q.pop();
    }

    for(i=0; i<n; i++)
        printf("Distance from %d to %d = %d\n",source,i,distance[i]);

        cout<<endl;

    a[0]=source;
    for(i=0; i<n; i++)
    {
      printf("%d",a[i]);

      if(i!=n-1)
        cout<<" --> ";
    }

    cout<<endl<<endl;


    return 0;
}
