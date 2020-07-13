#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TipsDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TipsDataStore"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& m_TipsData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T GetTips(uintptr_t tipsType) {
		return ((T (*)(TipsDataStore*, uintptr_t))(Il2CppBase() + 0x29B9C80))(this, tipsType);
	}
	template <typename T = bool> T SetTips(uintptr_t tipsType, int32_t number) {
		return ((T (*)(TipsDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x29B9EB0))(this, tipsType, number);
	}
	template <typename T = bool> T ClearTips() {
		return ((T (*)(TipsDataStore*))(Il2CppBase() + 0x29B9298))(this);
	}

};

}
