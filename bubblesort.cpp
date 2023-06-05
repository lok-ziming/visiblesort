#include"bubblesort.h"
BubbleSort::sort(QVector<int> &vec){
    for(int i = 0;i<vec.length();i++){
        for(int j = vec.length()-1;j--;j>i){
            int temp;
            look(j);
            if(vec[j]<vec[j-1]){
                swap(j,j-1);
                temp = vec[j];
                vec[j] = vec[j-1];
                vec[j-1] = temp;:
            }
        }
    }
}
