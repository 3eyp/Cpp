#Linux Centos7 (C++)
#Author: Eyüp ESER
#Date: 2023/09/8  4:50 PM
#Purpose: Perfect number algorithm in C++

#include <iostream>

using namespace std;

class Number{
        private:
        int num;

        public:
        int retNum(int num)
        {
                this-> num = num;
                return this-> num;
        }


};




class Start:public Number{
        public:
        int num;
        Start()
        {
                cout << "enter number: ";
                cin >> num;
        }

        int ret()
        {

                        return retNum(num);
        }
};

class Muk:public Start{
        private:
        int num;
        int tot;
        public:
        void st()
        {
                this-> num = ret();
                tot=0;
                for(int i=this->num; i>0;i--)
                {
                        for(int j=1;j<i;j++)
                        {
                                if(i%j==0)
                                        tot+=j;
                        }
                        if(tot==i)
                                cout << "Number " << i << " is perfect" << endl;
                        tot=0;
                }
        }



};

int main()
{
        Muk m;
        m.st();

        return 0;
}
