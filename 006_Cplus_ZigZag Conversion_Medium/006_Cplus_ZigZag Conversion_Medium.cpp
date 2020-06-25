class Solution {
public:
	string convert(string s, int numRows) {
		int iSize = s.size();
		string strReturn;
		vector<string> vecString;
		for (int i = 0; i<numRows; i++)
		{
			vecString.push_back();
		}
		for (int i = 0; i<iSize; i++)
		{
			if ((i / numRows) % 2 = 0)
			{
				vecRows[i%numRows] += s[i];
			}
			else
			{
				vecRows[(numRows - 2) - (i%numRows)] += s[i];
			}
		}
		for (int i = 0; i<numRows; i++)
		{
			strReturn += vecString(i);
		}
		return strReturn;
	}
};