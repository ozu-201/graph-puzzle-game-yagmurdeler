//
// Created by md024342 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H
#define GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H

std:vector <std::String >readDictionary(const std:: String filename){

    std:vector<std::String > words;
    std:ifstream dictionaryFile(filename);
    std:: String word;

    while(dictionaryFile>>word){
        word.push_back(word);
    } return words;
}

void createGraph(Graph graph, const std::vector<std:!string> words,int wordlength){
for(const std:String word:words){
if(wordlength()==wordlength){
graph.addEdge(word);
}
}}
int Main {



};


#endif //GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H
