#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPWeekAwardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPWeekAwardData"));
	}

	template <typename T = int32_t> T& AwardTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AwardState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_AwardTarget() {
		return ((T (*)(BPWeekAwardData*))(Il2CppBase() + 0x2C509CC))(this);
	}
	template <typename T = void> T set_AwardTarget(int32_t value) {
		return ((T (*)(BPWeekAwardData*, int32_t))(Il2CppBase() + 0x2C509BC))(this, value);
	}
	template <typename T = uintptr_t> T get_AwardState() {
		return ((T (*)(BPWeekAwardData*))(Il2CppBase() + 0x2C509D4))(this);
	}
	template <typename T = void> T set_AwardState(uintptr_t value) {
		return ((T (*)(BPWeekAwardData*, uintptr_t))(Il2CppBase() + 0x2C509C4))(this, value);
	}

};

}
