 if(mid%2==0){
            if(mid+1<n &&arr[mid] == arr[mid+1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        if(mid%2 !=0){
            if(mid-1>=0 && arr[mid] == arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }