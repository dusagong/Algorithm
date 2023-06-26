#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main()
{
    std::string filename = "bunrisugeo_sangsig_kwijeu_12munje_Submissions_2023-06-08 (2).csv";

    // Open the CSV file
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cout << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string line;
    std::vector<std::vector<std::string>> data;
    int totalRows = 0;

    // Read the CSV file line by line
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string value;

        // Skip the first 17 lines (header and irrelevant data)
        if (totalRows ==0)
        {
            totalRows++;
            continue;
        }

        std::vector<std::string> rowData;
        int col = 0;
        while (std::getline(ss, value, ','))
        {
            // Assuming the values start from column index 3 (column 4)
            if (col >= 3 && col <= 14)
            {
                rowData.push_back(value);
            }
            col++;
        }

        data.push_back(rowData);
        totalRows++;
    }

    // Calculate and display the percentage for each column
    int numColumns = data[0].size();
    for (int col = 0; col < numColumns; col++)
    {
        int count = 0;
        for (int row = 0; row < data.size(); row++)
        {
            if (data[row][col] == "\"O\"")
            {
                count++;
            }
        }

        double percentage = (static_cast<double>(count) / data.size()) * 100;
        std::cout << "Column " << col + 1 << ": " << percentage << "%" << std::endl;
    }

    file.close();
    return 0;
}
