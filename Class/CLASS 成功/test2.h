#include <string>
#include <iostream>
using namespace std;

class ABC
{
	public:
		
		ABC(string name)
		{
			sn(name);
		}
		ABC()
		{
			
		}
		
		void sn (string name)
		{
			tname=name;
		}
		
		string gcn()
		{
			return tname;
		}
		
		
		private:
			string tname;
};
