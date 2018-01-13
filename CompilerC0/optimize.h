#ifndef OPTIMIZE_H_INCLUDED
#define OPTIMIZE_H_INCLUDED
#include"memory.h"
#define MAXBBLK 1000
#define PMAX 100
#define SUCMAX 2
#define PRDCMAX 10

struct basic_blk{
    int st,en;
    int sucs[SUCMAX];
    int sucpt;
    int opt_st,opt_en;
};

extern struct basic_blk bblocklist[MAXBBLK];

struct DAG{
    int content;
    int index;
    struct DAG* left,*right;
    struct DAG* parents[PMAX];
    int inqueue;
    int parpt;
    struct var_node_for_DAG* varnodes,*vn_tail;
    struct DAG* next,*qnext,*qlast;
};

int DAG_node_cont;

struct node_list_ele{
    int va;
    int type;
    int isinit;
    int isact;
    struct node_list_ele* next,*last;
    struct DAG* node;
};

struct var_node_for_DAG{
    struct node_list_ele* ele;
    struct var_node_for_DAG* next;
};

void dismLocExp();


struct udv{
    int var;
    int type;
    struct udv* next;
};
struct udv_{
    struct udv* p;
    struct udv_* next;
};

struct rename_tab{
    int o, n;
    struct rename_tab *next;
};
#endif // OPTIMIZE_H_INCLUDED
