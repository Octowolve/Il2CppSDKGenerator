#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideUseDrug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_UseDrug"));
	}

	template <typename T = float> T& m_TipsHP() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideUseDrug*, uintptr_t))(Il2CppBase() + 0x3166670))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideUseDrug*))(Il2CppBase() + 0x31667F0))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideUseDrug*, uintptr_t))(Il2CppBase() + 0x3166AF4))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideUseDrug*, uintptr_t))(Il2CppBase() + 0x3166CA0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideUseDrug*))(Il2CppBase() + 0x3166CA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideUseDrug*, uintptr_t))(Il2CppBase() + 0x3166CA8))(this, P0);
	}

};

}
