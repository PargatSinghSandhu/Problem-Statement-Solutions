void plusMinus(vector<int> arr) {
   int size = arr.size();
   double pos=0, neg=0, zero=0;
   for(int i = 0; i< size; i++)
   {
       if(arr[i]>0)
       {
           pos++;
       }
       else if(arr[i]<0)
       {
           neg++;
       }
       else
       {
           zero++;
       }
       
   }
   
   cout<<setprecision(6)<<(pos/size)<<endl<<(neg/size)<<endl<<(zero/size);
}
