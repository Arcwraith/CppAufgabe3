//
// Created by pilcz_w1 on 25.02.2023.
//

//
// Created by pilcz_w1 on 18.02.2023.
//

#include <string>
class ExceptionZeichen
{
public:
    ExceptionZeichen(const std::string& reason)
            : m_reason(reason)
    { }
    std::string getError() const {
        return "Eingabe konnte nicht initialisiert werden!\n"
                                           "Grund: " + m_reason;
    }
private:
    std::string m_reason;
};

#ifndef UNTITLED1_EXCEPTIONZEICHEN_H
#define UNTITLED1_EXCEPTIONZEICHEN_H

#endif //UNTITLED1_EXCEPTIONZEICHEN_H
