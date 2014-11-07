#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int map_satisfied(map<string, double> lhs, map<string, double> rhs) {
    if (lhs.size() != rhs.size())
        return 0;

    int multiplifier = INT_MAX, temp;
    map<string, double>::const_iterator i, j;
    for(i = lhs.begin(); i != lhs.end(); ++i) {
        j = rhs.find(i->first);
        if ( j == rhs.end() || (j != rhs.end() && j->second < i->second) ) 
            return 0;
        if (i->second < j->second) {
            temp = ((j->second) / (i->second));
            multiplifier = multiplifier < temp ? multiplifier : temp;
        }
    }
    return multiplifier;
}

double getOneOrderUsage(map<string, double> recipe, int num) {
    map<string, double>::iterator iterator;
    double result = 0.;
    for (iterator = recipe.begin(); iterator != recipe.end(); ++iterator)
        result += iterator->second;
    return result;
}

map<string, double> findRecipe(vector<map<string, double> > recipes, map<string, double> pantry) {
    map<string, double> result;
    if (pantry.size() == 0) return result;
    if (recipes.size() == 0) return result;

    int n = recipes.size();
    double max[n];
    int temp, index = 0;

    for(int i = 0; i < recipes.size(); ++i) {
        temp = map_satisfied(recipes[i], pantry);
        max[i] = temp * getOneOrderUsage(recipes[i], temp);
    }

    temp = max[0];
    for(int i = 1; i < recipes.size(); ++i) {
        if (max[i] > temp)  {
            index = i;
            temp = max[i];
        }
    }

    if (max[index] == 0) return result;
    return recipes[index];
}

int main(){
    map<string, double> recipeA, recipeB, recipeC, pantry, result;
    vector<map<string, double> > recipes;

    pantry["flour"] = 12.5;
    pantry["oil"] = 10.5;
    pantry["seeds"] = 5.5;

    recipeA["flour"] = 13.0;
    recipeA["oil"] = 11.0;
    recipeA["seeds"] = 6.5;

    recipeB["flour"] = 26;
    recipeB["oil"] = 21;
    recipeB["seeds"] = 19;

    recipeC["flour"] = 11;
    recipeC["oil"] = 10.5;
    //recipeC["seeds"] = 7;
    recipeC["seeds"] = 5.2;

    recipes.push_back(recipeA);
    recipes.push_back(recipeB);
    recipes.push_back(recipeC);

    result = findRecipe(recipes, pantry);
    map<string, double>::iterator it;
    for (it = result.begin(); it != result.end(); ++it)
        cout << it->second << endl;
    
    return 0;
}
