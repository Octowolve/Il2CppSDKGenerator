#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalCombatBloodScoreBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalCombatBloodScoreBar"));
	}

	template <typename T = uintptr_t> T& SelfRootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& BloodCntLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BloodBar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TeamCntSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateBar(int32_t bloodCnt, int32_t aliveCnt, int32_t totalCnt) {
		return ((T (*)(TacticalCombatBloodScoreBar*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34CD774))(this, bloodCnt, aliveCnt, totalCnt);
	}

};

}
