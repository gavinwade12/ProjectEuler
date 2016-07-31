/* This program takes in integers n and k. It fills a vector with prime numbers up to n.
	It then finds all prime numbers that can divide integers 1 to n with no remainder and
	fills a vector with the results and the associated n (i in loop) value. The vector is 
    then sorted and the (k-1)th element (k for user) of the resulting vector is displayed. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findPrimes(vector<int>&, int);
bool sortRads(const vector<int>& a, const vector<int>& b);

int main(int argc, const char * argv[]) {
    vector<int> primes;
    vector< vector<int> > kVec;
    vector<int> rads (2, 0);
    int n;
    int k;
    int radN;
    
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    
    findPrimes(primes, n);
    
    //Fills rads vector with rad(n)
    for (int i = 1; i <= n; i++) {
        radN = 1;
        for (int j = 0; ((j < primes.size()) && (j < i)); j++) {
            if (i % primes[j] == 0)
                radN = radN * primes[j];
        }
        //Relates n value to rad(n) value via vector
        rads[0] = i;
        rads[1] = radN;
        //Adds current vector to my final vector
        kVec.push_back(rads);
    }
    
    //Overloaded with sortRads function to do custom sort
    sort(kVec.begin(), kVec.end(), sortRads);
    
    //Ensures k is within the bounds of rads vector
    while (k > n) {
        cout << "k value too large. new k: ";
        cin >> k;
    }
    
    cout << "E(" << k << "): " << kVec[k-1][0] << endl;
    
    return 0;
}

//Fills primes vector with prime numbers up to n
void findPrimes(vector<int>& primes, int n) {
    bool isPrime;
    
    primes.push_back(1);
    primes.push_back(2);
    for (int i = 3; i <= n; i++) {
        isPrime = true;
        for (int j = 2; j <= (i/2); j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }
}

//Sorts vector in ascending order
bool sortRads(const vector<int>& a, const vector<int>& b) {
    //If rad values are equal, sort by n value
    if (a[1] == b[1])
        return a[0] < b[0];
    //Sorting by rad value
    else
        return a[1] < b[1];
}