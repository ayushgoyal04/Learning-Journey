#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
        {
        }

    // copy constructor
    Vertex(const Vertex& vertex)
        :x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout<<"copied!"<<std::endl;
    }
};


int main()
{
    // by default by push_back first the values is assigned inside the stack fram fo the main function then they are transferred to the actuual memory location, this adds additional costs tot he vect0or . to avoid that we uyse the emplace_back instead of push back.
    // If we do nothing then there arte 6 copies but adding size reduces that to 3 and adding implace reduces that to 0

    std::vector<Vertex> vertices;
    vertices.reserve(3);
    // vertices.push_back(Vertex(1, 2, 3));
    // vertices.push_back(Vertex(4, 5, 6));
    // vertices.push_back(Vertex(7, 8, 9));
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);



}
