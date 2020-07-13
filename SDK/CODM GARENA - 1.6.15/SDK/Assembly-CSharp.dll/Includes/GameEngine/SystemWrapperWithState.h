#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SystemWrapperWithState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SystemWrapperWithState"));
	}

	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& System() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(SystemWrapperWithState*))(Il2CppBase() + 0x3418760))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(SystemWrapperWithState*, uintptr_t))(Il2CppBase() + 0x3418768))(this, value);
	}
	template <typename T = uintptr_t> T get_System() {
		return ((T (*)(SystemWrapperWithState*))(Il2CppBase() + 0x3418770))(this);
	}
	template <typename T = void> T set_System(uintptr_t value) {
		return ((T (*)(SystemWrapperWithState*, uintptr_t))(Il2CppBase() + 0x342D584))(this, value);
	}

};

}
