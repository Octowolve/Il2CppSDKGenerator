#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MissingMethodException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MissingMethodException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(MissingMethodException*))(Il2CppBase() + 0x454E7D4))(this);
	}

};

}
