int sum = 0;
        for(int i=0; i<tree.size(); i++){
            if((tree[i]-mid)>0) {
                sum = sum + (tree[i]-mid);
            }
        }
            
        return sum; 