
#include <iostream>
#include "ingest.cpp"

using namespace ingest;

int main(){
 
  read("/workspaces/messingAround/HighlyPermimiable/out.txt");

   for(int x =0; x < in.size(); x++){
    std::cout<<in[x]<<"\n";
   }

 return 24;
}
