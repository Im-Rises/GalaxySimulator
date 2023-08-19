module;

#include <functional>
#include <list>

export module eventsystem;

export using FunctionPointer = std::function<void()>;

export class EventSystem {
public:
    void subscribe(FunctionPointer functionPointer);
    void unSubscribe(FunctionPointer functionPointer);

    void operator+=(FunctionPointer functionPointer);
    void operator-=(FunctionPointer functionPointer);

    void triggerEvent();
    void triggerEventSafely();

private:
    std::list<FunctionPointer> functionsPtrList;

};
