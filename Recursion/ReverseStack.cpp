void sortInsert(stack<int> &s, int ele){
    int temp;
    if(s.empty() || s.top()<ele) s.push(ele);
    else {
        temp=s.top(); s.pop();
        sortInsert(s, ele);
        s.push(temp);
    }
}

void SortedStack :: sort()
{
   //Your code here
   int temp;
   if(!s.empty()){
       temp=s.top(); s.pop();
       sort();
       sortInsert(s,temp);
   }
}
