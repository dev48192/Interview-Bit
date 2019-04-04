string Solution::findDigitsInBinary(int A) {
    string s;
    if(A==1){s.push_back('1');return s;}
    if(A==0){s.push_back('0');return s;}
    while(A>0){
    if(A%2==0){A=A/2;s.push_back('0');}
    else{
        A=A/2;s.push_back('1');
    }
    }
    reverse(s.begin(), s.end());
    return s;
}
