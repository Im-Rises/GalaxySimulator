module eventsystemother;

import eventsystemother;

void EventSystemOther::subscribe(FunctionPointer functionPointer) {
    // functionsPtrList.push_back(functionPointer);
}

void EventSystemOther::subscribe(MethodPointer methodPointer) {
    // functionsPtrList.push_back(functionPointer);
}

void EventSystemOther::unSubscribe(FunctionPointer functionPointer) {
    // functionsPtrList.erase(functionPointer);
}

void EventSystemOther::unSubscribe(MethodPointer methodPointer) {
    // functionsPtrList.erase(functionPointer);
}

// void EventSystemOther::operator+=(FunctionPointer functionPointer) {
//     subscribe(functionPointer);
// }
//
// void EventSystemOther::operator-=(FunctionPointer functionPointer) {
//     unSubscribe(functionPointer);
// }

void EventSystemOther::triggerEvent() {
    for (auto& function : functionsList)
    {
        // function();
    }

    for (auto& mymethod: methodsList)
    {
        mymethod.triggerMethod();
    }
}
