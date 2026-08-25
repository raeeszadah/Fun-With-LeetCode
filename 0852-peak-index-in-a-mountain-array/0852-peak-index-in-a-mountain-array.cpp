class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int start = 0;
        int end = arr.size() - 1;

        // Use 'start < end' so the loop stops exactly when they meet at the peak
        while (start < end) {
            int mid = start + (end - start) / 2;

            // If mid is smaller than the next element, we are on the rising slope (left side).
            // The peak must be further to the right.
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1; 
            } 
            // Otherwise, mid is either the peak or on the falling slope (right side).
            // The peak must be at mid or to its left.
            else {
                end = mid; // Do not use mid - 1, because mid itself could be the peak!
            }
        }

        // start and end have converged to the peak index
        return start;
        
    }
};