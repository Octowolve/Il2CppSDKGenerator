#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Unity.IL2CPP.CompilerServices {

class Il2CppSetOptionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IL2CPP.CompilerServices", "Il2CppSetOptionAttribute"));
	}

	template <typename T = uintptr_t> T& Option() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Option() {
		return ((T (*)(Il2CppSetOptionAttribute*))(Il2CppBase() + 0x420991C))(this);
	}
	template <typename T = void> T set_Option(uintptr_t value) {
		return ((T (*)(Il2CppSetOptionAttribute*, uintptr_t))(Il2CppBase() + 0x420990C))(this, value);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(Il2CppSetOptionAttribute*))(Il2CppBase() + 0x4209924))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(Il2CppSetOptionAttribute*, uintptr_t))(Il2CppBase() + 0x4209914))(this, value);
	}

};

}
