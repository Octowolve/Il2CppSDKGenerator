#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ArgumentException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ArgumentException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& param_name() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppString*> T get_ParamName() {
		return ((T (*)(ArgumentException*))(Il2CppBase() + 0x361EAA8))(this);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ArgumentException*))(Il2CppBase() + 0x361EAB0))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ArgumentException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361EC2C))(this, info, context);
	}

};

}
