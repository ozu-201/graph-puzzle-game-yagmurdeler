//
// Created by md024342 on 12/14/2023.
//
#ifndef GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H
#define GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<std::string> readDictionary(const std::string filename){

    std::vector<std::string > words;
    std::ifstream dictionaryFile(filename);
    std:: string word;

    while(dictionaryFile>>word){
        word.push_back(word);
    } return words;
}

int Main {



    const std:: String dictionaryFilename=" ";
    const int vertexCount=26;
    std::vector<std:!String> dictionaryWords =readDictionary(dictionaryFilename) ;
    Graph graph (vertexCount);
    createGraph(graph,dictionaryWords, 3);

};


void createGraph(Graph graph, const std::vector< std:!string> words,int wordlength){
for(const std::string word:words){
if(wordlength()==wordlength){
graph.addEdge(word);
}
}
}
#endif //GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H

#include "Main.h"
