#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,string>>piii;

int main()
{

     priority_queue <piii, vector<piii>, greater<piii> > pq;

     int n,p,bt,i,total_time=0,presum=0;

     int cumulative[n+1];



     string processor;

     cout<<"Input Number of process : ";

     cin>>n;

     cout<<"Input Format :"<<endl;

     cout<<"Processor Name : Brust Time : Priority "<<endl<<endl;

     for(i=0; i<n; i++)
     {
         cin>>processor>>bt>>p;

         pq.push({p,{bt,processor}});
     }

     cout<<"\nGanttt Chart : "<<0<<"  ";

     while(!pq.empty())
     {
         piii x = pq.top();

         pq.pop();

         presum+=x.second.first;

         cout<<x.second.second<<"  "<<presum<<"  ";

         total_time+=presum;
     }
     cout<<endl<<endl;

     double avg_waiting = (double)(total_time-presum)/n;

     double avg_turnaround=(double)(total_time)/n;

     cout<<"Average waiting time : "<<avg_waiting<<endl<<"\nAverage Turnaround time : "<<avg_turnaround<<endl;

}
/*

Input :

5
p1 10 3
p2  1 1
p3  2 4
p4  1 5
p5  5 2

*/






