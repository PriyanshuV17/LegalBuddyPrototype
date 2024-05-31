#ifndef CASE_H
#define CASE_H

#include <string>
#include <vector>
#include "Document.h"

class Case {
private:
    std::string caseID;
    std::string caseName;
    std::vector<Document> documents;

public:
    Case(const std::string& caseID, const std::string& caseName);

    std::string getCaseID() const;
    std::string getCaseName() const;
    void addDocument(const Document& doc);
    void listDocuments() const;
};

#endif
