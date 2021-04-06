curr_max =arr[0];
over_maxx=arr[0];

for(int i=1;i<n;i++)
{
    curr_max = max(arr[i] , arr[i]+curr_max);
    over_maxx = max(curr_max,over_maxx);
}
return over_maxx;
