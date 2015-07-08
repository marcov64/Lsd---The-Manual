#include "fun_head.h"

MODELBEGIN




EQUATION("Prob")
/*
Comment
*/

RESULT(pow(V("q"),V("a"))/V("TotProb") )

EQUATION("TotProb")
/*
Comment
*/
v[0]=0;
CYCLE(cur, "u")
 {
  v[0]+=pow(VS(cur,"q"),V("a"));
 }

RESULT( v[0])

EQUATION("q")
/*
Comment
*/
if(V("id")==1)
 v[0]=UNIFORM(0.01,.99);
else
 v[0]=1-VS(p->up,"q"); 
RESULT(v[0] )


EQUATION("a")
/*
Comment
*/
v[0]=UNIFORM(V("min"),V("max"));
RESULT(v[0] )



MODELEND




void close_sim(void)
{

}


