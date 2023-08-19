module eventsystem;

import eventsystem;

void EventSystem::subscribe(FunctionPointer functionPointer) {
    functionsPtrList.push_back(functionPointer);
}

void EventSystem::unSubscribe(FunctionPointer functionPointer) {
    // functionsPtrList.erase(functionPointer);
}

void EventSystem::operator+=(FunctionPointer functionPointer) {
    subscribe(functionPointer);
}

void EventSystem::operator-=(FunctionPointer functionPointer) {
    unSubscribe(functionPointer);
}

void EventSystem::triggerEvent() {
    for (auto& functionPointer : functionsPtrList)
    {
        functionPointer();
    }
}

void EventSystem::triggerEventSafely() {
    // for (auto& functionPointer : functionsPtrList)
    // {
    //     if (functionPointer != nullptr)
    //     {
    //         (*functionPointer)();
    //     }
    // }
}
