module;
#include <unordered_set>
export module event;

export using FunctionPointer = void(*)();

export class Event {
public:
    void subscribe(FunctionPointer functionPointer);
    void unSubscribe(FunctionPointer functionPointer);

    void operator+=(FunctionPointer functionPointer);
    void operator-=(FunctionPointer functionPointer);

    void triggerEvent();
    void triggerEventSafely();

private:
    std::unordered_set<FunctionPointer> functionsPtrList;
};
