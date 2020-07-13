#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideModeRuleIntroduce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_ModeRuleIntroduce"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499CD1C))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideModeRuleIntroduce*, uintptr_t))(Il2CppBase() + 0x499CE90))(this, ID);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499D08C))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499D134))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499D1DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideModeRuleIntroduce*, uintptr_t))(Il2CppBase() + 0x499D1E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Enter() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499D1EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(BRNewGuideModeRuleIntroduce*))(Il2CppBase() + 0x499D1F4))(this);
	}

};

}
