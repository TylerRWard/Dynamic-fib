/*
* @author Tyler Ward
* @version March 28
*/

#include <iostream>
using namespace std;
#define UNKNOWN -1
//Memo-izing only works when the subproblems are consistant
long long int *M; //memo-ized array of already calculated answers
long long int fibo(int seqNum)
{

   M[0] = M[1] = 1;

   for (int i = 2; i<=seqNum; i++)
   {
    M[i] = M[i-1]+M[i-2];

   }

    return  M[seqNum];
}

int main(int argc, char *argv[])
{
    int snum = stoi(argv[1]);
    //array for memory one slot for every answer that will be calculated
    M = new long long int[snum+1];

    //initialize array
    for (int s = 0; s<=snum; s++)
        M[s] = UNKNOWN;
    
    fibo(snum);
    cout <<M[snum]<<endl;
    //cout<<fibo(snum)<<endl;

    return 0;

}