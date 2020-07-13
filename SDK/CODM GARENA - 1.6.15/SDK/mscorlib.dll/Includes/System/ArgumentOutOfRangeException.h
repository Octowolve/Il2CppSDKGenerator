#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ArgumentOutOfRangeException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ArgumentOutOfRangeException"));
	}

	template <typename T = uintptr_t> T& actual_value() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ArgumentOutOfRangeException*))(Il2CppBase() + 0x361F124))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ArgumentOutOfRangeException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361F218))(this, info, context);
	}

};

}
