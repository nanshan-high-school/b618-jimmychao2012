int main()
{   
    int x, l, y;
    cout << "今天在南邊(負)or北邊(正)幾步?";
    cin >> l;
    if(l > 0){
        x = l;
        y = 2*x - 1;
    }else{
        x = -l;
        y = 2*x;
    }
    cout << y;

    return 0;
}