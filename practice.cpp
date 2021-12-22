#include<algorithm>
#include<iostream>
using namespace std;

struct Job
{
   char id;     
   int dead;    
   int profit;  
};
  
bool comparison(Job &a, Job b)
{
    return (a.profit > b.profit);
}
  
void printJobScheduling(Job arr[], int n)
{
    sort(arr, arr+n, comparison);
	int maxi=0; 
	for(int i=0;i<n;i++)
		maxi=max(maxi,arr[i].dead);
	int slot[maxi+1];

    for (int i=0; i<=maxi; i++)
        slot[i] = -1;

	int countJobs=0,jobProfit=0;
    for (int i=0; i<n; i++)
    {
       for (int j=arr[i].dead; j>0; j--)
       {
          if (slot[j]==-1)
          {
            slot[j] = i;  
			countJobs++;
			jobProfit+=arr[i].profit;
            break;
          }
       }
    }
	cout<<"Count of jobs: "<<countJobs<<"\n";
	cout<<"Total Progit: "<<jobProfit<<"\n";
	cout<<"jobs Execution: \n";
    for(int i=0; i<=maxi; i++)
       if (slot[i]!=-1)
        cout << arr[slot[i]].id<<" ";
}

int main()
{
    int n;
    cin>>n;
    
    Job arr[n];
    
    for(int i=0; i<n; i++)
    {
		char x;
        int y,z;
        cin>>x>>y>>z;
        arr[i].id=x;
        arr[i].dead=y;
        arr[i].profit=z;
    }
    
    printJobScheduling(arr, n);
    
    return 0;
}