#include <iostream>
#include "hashtable.h"

int main(){
hashtable h;
/*h.InsertLinear(10);
h.InsertLinear(22);
h.InsertLinear(31);
h.InsertLinear(4);
h.InsertLinear(15);
h.InsertLinear(28);
h.InsertLinear(17);
h.InsertLinear(88);
h.InsertLinear(59);*/

/*h.InsertQuadratic(10);
h.InsertQuadratic(22);
h.InsertQuadratic(31);
h.InsertQuadratic(4);
h.InsertQuadratic(15);
h.InsertQuadratic(28);
h.InsertQuadratic(17);
h.InsertQuadratic(88);
h.InsertQuadratic(59);*/

h.InsertDoubleHashing(10);
h.InsertDoubleHashing(22);
h.InsertDoubleHashing(31);
h.InsertDoubleHashing(4);
h.InsertDoubleHashing(15);
h.InsertDoubleHashing(28);
h.InsertDoubleHashing(17);
h.InsertDoubleHashing(88);
h.InsertDoubleHashing(59);

h.Print();
return 1;
}
