#include <iostream>
#include "User.h"
#include "Case.h"
#include "Document.h"
#include "Client.h"
#include "Lawyer.h"

int main() {
    User user("John Doe", "john.doe@example.com", "password123");
    user.display();

    Case case1("123", "Case A");
    Document doc1("Document 1", "Content of Document 1");
    Document doc2("Document 2", "Content of Document 2");

    case1.addDocument(doc1);
    case1.addDocument(doc2);

    case1.listDocuments();

    Client client("Jane Smith", "jane.smith@example.com");
    client.display();

    Lawyer lawyer("Richard Roe", "richard.roe@example.com");
    lawyer.display();

    return 0;
}
