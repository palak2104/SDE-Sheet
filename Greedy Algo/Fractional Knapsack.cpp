class Solution {
   public:
      bool static comp(Item a, Item b) {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }
   // function to return fractionalweights
   double fractionalKnapsack(int W, Item arr[], int n) {

      sort(arr, arr + n, comp);

      double finalvalue = 0;

      for (int i = 0; i < n; i++) {

         if (W>=arr[i].weight) {
            finalvalue += arr[i].value;
            W-=arr[i].weight;
         } else {
            finalvalue += (arr[i].value / (double) arr[i].weight) * (double)W;
            break;
         }
      }

      return finalvalue;

   }
};
