#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPLevelUpData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPLevelUpData"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_Level() {
		return ((T (*)(BPLevelUpData*))(Il2CppBase() + 0x2C45DA4))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(BPLevelUpData*, int32_t))(Il2CppBase() + 0x2C45D94))(this, value);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(BPLevelUpData*))(Il2CppBase() + 0x2C45DAC))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(BPLevelUpData*, uintptr_t))(Il2CppBase() + 0x2C45D9C))(this, value);
	}

};

}
