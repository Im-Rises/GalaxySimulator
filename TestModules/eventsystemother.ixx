module;

#include <unordered_set> 

export module eventsystemother;

export using FunctionPointer = void (*);

export using ObjectPointer = void*;

export class MethodPointer {
private:
    ObjectPointer objectPointer;
    FunctionPointer functionPointer;

public:
    // MethodPointer() = delete;
    explicit MethodPointer(ObjectPointer objectPointer, FunctionPointer functionPointer) {
        this->objectPointer = objectPointer;
        this->functionPointer = functionPointer;
    }

    bool operator==(const MethodPointer& other) const {
        return this->objectPointer == other.objectPointer && this->functionPointer == other.functionPointer;
    }

    void triggerMethod() {
        functionPointer(objectPointer);
    }
};

export class EventSystemOther
{
public:
    void subscribe(FunctionPointer functionPointer);
    void subscribe(MethodPointer methodPointer);

    void unSubscribe(FunctionPointer functionPointer);
    void unSubscribe(MethodPointer methodPointer);

    void operator+=(FunctionPointer functionPointer);
    void operator+=(MethodPointer methodPointer);

    void operator-=(FunctionPointer functionPointer);
    void operator-=(MethodPointer methodPointer);

    void triggerEvent();
    void triggerEventSafely();

private:
    std::unordered_set<FunctionPointer> functionsList;
    std::unordered_set<MethodPointer> methodsList;
};
