//Leggere da file
#include <fstream> 
ifstream infile;
infile.open("my_file.txt");
double g=0;

if (infile.is_open()){
  cout<<"File aperto"<<endl;
 }

while (infile >>g){//Questo e' il modo corretto di leggere un file
  std::cout<<g<<std::endl;
}
infile.close();

//while ( infile.good() ){//Questo NON e' corretto perche' stampa 2 volte l'ultima riga
  //infile>>g;
  //cout<<"g is "<<g;
 //}


//Scrivere su file
#include <fstream> 
std::ofstream ofs ("test.txt", std::ofstream::out);
ofs << "lorem ipsum";
ofs.close();

//in inputFile open for reading: the internal stream buffer supports input operations.
//out* outputFile open for writing: the internal stream buffer supports output operations.
//binary binaryOperations are performed in binary mode rather than text.
//ate   at endThe output position starts at the end of the file.
//app   appendAll output operations happen at the end of the file, appending to its existing contents.
//trunc truncateAny contents that existed in the file before it is open are discarded.


