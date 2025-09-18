#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;
};

// output operator
std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    Vertex verticesStack[5]; // tied to the size
    Vertex* verticesHeap = new Vertex[5]; // still tied to size even on heap


    std::vector<Vertex> vertices; // this is a cpp template

    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for(int i = 0; i < vertices.size(); i++)
        std::cout << vertices[i] << std::endl;

    for(Vertex& v : vertices)
        std::cout << v << std::endl;

    // vertices.clear();
    vertices.erase(vertices.begin() + 1);


}
