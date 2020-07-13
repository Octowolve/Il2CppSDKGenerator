#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonRulesManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonRulesManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& commonRulesMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonRulesById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonRulesByTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonRulesByTabAndTabChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitConfig() {
		return ((T (*)(CommonRulesManager*))(Il2CppBase() + 0x3DF32A0))(this);
	}
	template <typename T = uintptr_t> T GetCommonRulesById(int32_t id) {
		return ((T (*)(CommonRulesManager*, int32_t))(Il2CppBase() + 0x3DF33FC))(this, id);
	}
	template <typename T = uintptr_t> T GetCommonRulesByTab(int32_t tab) {
		return ((T (*)(CommonRulesManager*, int32_t))(Il2CppBase() + 0x3DF3538))(this, tab);
	}
	template <typename T = uintptr_t> T GetCommonRulesByTabAndTabChild(int32_t tab, int32_t tabChild) {
		return ((T (*)(CommonRulesManager*, int32_t, int32_t))(Il2CppBase() + 0x3DF3674))(this, tab, tabChild);
	}

};

}
