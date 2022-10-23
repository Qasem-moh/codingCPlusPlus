#include <iostream>
#include <vector>
#include <string>

struct Vertex {
    float x, y, z;
};

std::ostream &operator<<(std::ostream &stream, const Vertex &vertex) {
    stream << vertex.x << " " << vertex.y << " " << vertex.z;
    return stream;
}

int main() {
    std::vector<Vertex> vertices;
    vertices.push_back({1,2,3});
    vertices.push_back({1,2,3});

    for (int i = 0; i < vertices.size(); ++i) {
        std::cout<<vertices[i]<<std::endl;
    }

    for(Vertex& v:vertices)
        std::cout<<v<<std::endl;
    return 0;
}