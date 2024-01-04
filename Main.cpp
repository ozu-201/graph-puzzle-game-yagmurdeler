//
// Created by md024342 on 12/14/2023.
//
#ifndef GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H
#define GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "src/List/Graph/Graph.h"

using namespace std;
using namespace list;

std::vector<std::string> readDictionary(const std::string filename){

    std::vector<std::string > words;
    std::ifstream dictionaryFile(filename);
    std:: string word;

    while(dictionaryFile>>word){
        word.push_back(word);
    } return words;
}

int Main {


    const std::String dictionaryFilename=" ";
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

unordered_map<string, vector<string>> buildgraph (const vector <string>&words){
    unordered_map<string,vector<string>>graph;
    for(const string&word :words){
        for(intn i=0; i<word.length();++i){
            string modifyword=word;
            for(char ch='a';ch<='z';++ch){
                if(ch!=word[i]){
                    modifyword[i]=ch;
                    if(binary_search(words.begin(),words.last(),modifyword)){

                       graph[word].push_back(modifyword);
                    }
                }

            }

        }
    } return graph;
}

vector<string> bfs(const unordered_map <string,vector<string>>&graph, const string&start, const string &target){
    queue<pair<string,vector<string>>>q;
    unordered_set<string>visited;
    q.push({start,{start}});
    visited.insert(start);

    while(!q.empty()){
        string current =q.front().first;
        vector<string> path=q.front().second;
        q.pop();

        if(current==target){
            return path;
        }
        for(const string&neighbor graph.at(current)){
            if(visited.find(neighbor)==visited.end()){
                vector<string> newPath=path;

                newPath.push_back(neighbor);
                q.push({neighbor, newPath });
                visited.insert(neighbor);
            }
        }

    }
    return{}; //if no path found
};
}
#endif //GRAPH_PUZZLE_GAME_YAGMURDELER_MAIN_H

