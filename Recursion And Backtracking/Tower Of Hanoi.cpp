class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int a, int c, int b) {
        // Your code here
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
            return 1;
        }
        long long x=toh(n-1,a,b,c);
        cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
        long long y=toh(n-1,b,c,a);
        return 1+x+y;
        
    }

};
