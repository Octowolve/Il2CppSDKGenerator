#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FsmTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "FsmTemplate"));
	}

	template <typename T = Il2CppString*> T& category() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(FsmTemplate*))(Il2CppBase() + 0x2EC7CCC))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(FsmTemplate*, Il2CppString*))(Il2CppBase() + 0x2EC7CD4))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(FsmTemplate*))(Il2CppBase() + 0x2EC7CDC))(this);
	}

};

}
