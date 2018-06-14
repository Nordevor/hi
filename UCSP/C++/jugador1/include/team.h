#ifndef TEAM_H
#define TEAM_H
#include <string>
using namespace std;


class team
{
    public:
        string locVis;
        int numJug, pelota;

        team();
        team(int pelota, int numJug, string locVis);

        void setPelota(int p);
        void setnumJug(int nj);
        void setLocVis(string lv);

        void print();
};

#endif
