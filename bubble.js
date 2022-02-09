function inArr(){
    let len = inArr.length;
    for(let i=0; i< len; i++){
        for(let m=0; m< len; m++){
            if( inArr[m] > inArr[m+1] ){
                swap(inArr[m], inArr[m+1] );
            }
        }
    }
}

function swap(a, b){
    temp = a;
    a = b;
    b = temp;
}