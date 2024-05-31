#include "Case.h"
#include <iostream>

Case::Case(const std::string& caseID, const std::string& caseName) : caseID(caseID), caseName(caseName) {}

std::string Case::getCaseID() const { return caseID; }

std::string Case::getCaseName() const { return caseName; }

void Case::addDocument(const Document& doc) {
    documents.push_back(doc);
}

void Case::listDocuments() const {
    std::cout << "Documents for Case: " << caseName << std::endl;
    for (const auto& doc : documents) {
        std::cout << doc.getTitle() << std::endl;
    }
}

