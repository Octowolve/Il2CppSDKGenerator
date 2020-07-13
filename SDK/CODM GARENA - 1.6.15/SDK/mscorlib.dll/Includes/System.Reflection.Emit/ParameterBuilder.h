#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ParameterBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ParameterBuilder"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Attributes() {
		return ((T (*)(ParameterBuilder*))(Il2CppBase() + 0x457B7A4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ParameterBuilder*))(Il2CppBase() + 0x457B7AC))(this);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(ParameterBuilder*))(Il2CppBase() + 0x457B7B4))(this);
	}

};

}
