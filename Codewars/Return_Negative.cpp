int makeNegative(int num)
// Examples
// makeNegative(1);  // return -1
// makeNegative(-5); // return -5
// makeNegative(0);  // return 0
// https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp

{
  if (num==0)
    { return 0; } 
  else if (num<0)
    { return num; }
  else  
    {return -num; }
  }
