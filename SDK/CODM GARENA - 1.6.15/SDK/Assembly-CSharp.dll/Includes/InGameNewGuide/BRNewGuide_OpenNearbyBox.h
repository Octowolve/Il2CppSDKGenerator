#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideOpenNearbyBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_OpenNearbyBox"));
	}

	template <typename T = uintptr_t> T& m_CurInterface() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_BoxView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ListView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearbyListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideOpenNearbyBox*, uintptr_t))(Il2CppBase() + 0x499DE40))(this, Msg);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499DFCC))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499E3EC))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499E5CC))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideOpenNearbyBox*, uintptr_t))(Il2CppBase() + 0x499EB60))(this, ID);
	}
	template <typename T = bool> T CheckNearbyListView() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499E854))(this);
	}
	template <typename T = uintptr_t> T GetController(uintptr_t id) {
		return ((T (*)(BRNewGuideOpenNearbyBox*, uintptr_t))(Il2CppBase() + 0x499EDE0))(this, id);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideOpenNearbyBox*, uintptr_t))(Il2CppBase() + 0x499F058))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499F060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499F068))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideOpenNearbyBox*))(Il2CppBase() + 0x499F070))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideOpenNearbyBox*, uintptr_t))(Il2CppBase() + 0x499F078))(this, P0);
	}

};

}
