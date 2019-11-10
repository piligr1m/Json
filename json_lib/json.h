#include <string>
#include <vector>
#include <any>


class Json
{
private:
    std::vector<std::any> keys;
    std::vector<std::any> values;
    std::vector<std::any> array;

public:
    Json(const std::string& s);
    bool is_array() const;
    bool is_object() const;
    std::any& operator[](const std::string& key);
    std::any& operator[](int index);
    static Json parse(const std::string& s);
    static Json parseFile(const std::string& path_to_file);
};

