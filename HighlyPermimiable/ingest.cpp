#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

namespace ingest{
std::ifstream file;
std::string line;

//#define inputfile "/workspaces/messingAround/HighlyPermimiable/out.txt"

typedef std::vector<std::string> strVector;

  strVector in;

int read(std::string inputfile){
  
  std::string blockName;

  file.open(inputfile);

  while (getline (file,line)){

    if(line.find("#") != std::string::npos){

    line.erase(std::remove(line.begin(), line.end(), '#'), line.end());
      line.insert(0,"#");
     blockName = line;

    in.push_back(blockName);

    getline (file,line);

        int blockIndex = 0;

        while (line.find(":") != std::string::npos){
          
          line.erase(std::remove(line.begin(), line.end(), ':'), line.end());
          line.insert(0,std::to_string(blockIndex));
          in.push_back(line);
          getline (file,line);
          blockIndex++;

          if(line.find("_end") != std::string::npos){return 1;}
          } 
        }
      
      }
    file.close();
  return 0;
  }
}