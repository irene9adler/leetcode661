#include <iostream>

using namespace std;
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> res(M.size(),vector<int>(M[0].size())); //ȡ����ά�����ά�� :M.size() M[0].size()
        //����vector�Ķ�ά���� ����vector����vector  ��ζ���һ�����ȵ�vector
        //�˸�λ�ü��Լ�
        int dx [9]= {0,0,0,1,1,1,-1,-1,-1};
        int dy [9] ={0,1,-1,1,0,-1,1,-1,0};
        int tmp_num;
        int tmp_sum;
        int i,j,k;
        int xi,yi;
        for(i = 0;i < M.size();i++)
        {
            for(j = 0;j < M[i].size();j++)
            {
                   tmp_sum = 0;
                   tmp_num = 0;
                    //�˸�λ�ü��Լ�
                    for(k = 0;k < 9;k ++)
                    {
                        xi = i + dx[k];
                        yi = j + dy[k];
                        if(xi,yi >= 0 && xi < M.size() && yi < M[0].size())
                        {
                            tmp_num += 1;
                            tmp_sum += M[xi][yi];
                        }
                    }
                    res[i][j] = tmp_sum / tmp_num;
                   // M[i][j] = tmp_sum / tmp_num;  ���� M[i][j]���ڱ����º���ͱ��ˡ�

                }
            }
            return res;
        }


};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
