

int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d){
    
    int dis = 0;
    int temp;
    bool ld;
    for(int i = 0; i < arr1Size; i++)
    {
        ld = 1;
        for(int j = 0; j < arr2Size; j++)
        {
            temp = abs(arr1[i] - arr2[j]);
            ld = ld && (temp > d);
        }
        dis += ld;
    }
    
    return dis;
}

