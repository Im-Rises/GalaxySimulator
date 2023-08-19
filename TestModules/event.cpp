module event;

import event;

void Event::subscribe(FunctionPointer functionPointer) {
    functionsPtrList.emplace(functionPointer);
}

void Event::unSubscribe(FunctionPointer functionPointer) {
    functionsPtrList.erase(functionPointer);
}

void Event::operator+=(FunctionPointer functionPointer) {
    subscribe(functionPointer);
}

void Event::operator-=(FunctionPointer functionPointer) {
    unSubscribe(functionPointer);
}

void Event::triggerEvent() {
    for (auto& functionPointer : functionsPtrList)
    {
        (*functionPointer)();
    }
}

void Event::triggerEventSafely() {
    for (auto& functionPointer : functionsPtrList)
    {
        if (functionPointer != nullptr)
        {
            (*functionPointer)();   
        }
    }
}
