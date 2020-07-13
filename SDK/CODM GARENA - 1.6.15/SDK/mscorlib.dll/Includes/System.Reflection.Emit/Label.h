#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class Label
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "Label"));
	}

	template <typename T = int32_t> T& label() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Label*, uintptr_t))(Il2CppBase() + 0x4570510))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Label*))(Il2CppBase() + 0x4570518))(this);
	}

};

}
