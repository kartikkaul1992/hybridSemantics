#include "file_for_2D_array.cpp"

/*void fun(int b[1300],int o[1300],int w[1300][1300])
{
    int level,x,nodes;
    //k is number of useful words in a sentence
    for(level=2;level<k;level++)
    {
        for (nodes=((level-1)*level/2)+1; nodes<=level*(level+1)/2;nodes ++)
        {
            for(x=((level-2)*(level-1)/2)+1;x<level*(level-1)/2;x++)
            {
                b[x]+= w[x][nodes]*o[nodes]*(1-o[nodes])*b[nodes];
                w[x][nodes]+=r*o[x]*o[nodes]*(1-o[x])*b[x];
            }
        }
    }
    return;
}*/
int main()
{
    // let the max no of words in a sentence after removing punctuation and stopwords be 20
    fun_2D_array();
    int b[1300]={0.4},o[1300]={0.4},d[1300]={1,1,1,0,0,1,1,0,0,0,1,0,1,1,1},w[700][700]={0.5},no_of_lines;
    cout<<i;
    no_of_lines=i;
    for(j=1;j<=no_of_lines;j++)
    {
        fun(b)
    }
    /*for each(sentence  )
    {
        fun(b,o,w);
    }*/
}
