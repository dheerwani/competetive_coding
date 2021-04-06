int minEle;
stack<int> s;

void push(int x)
{
	if(x < minEle)
	{
		int temp = 2*x - minEle;
		s.push(temp);
		minEle=x;
	}
	else
	{
		s.push(x);
	}
}

void pop()
{
	int temp = s.top();
	if(temp < minEle)
	{
		int a = 2*minEle - temp;
		minEle =a;
	}

	s.pop();
}