#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuideUseAirDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuide_UseAirDrop"));
	}

	template <typename T = Il2CppString*> static T& m_CurFireSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_RunningState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverTimeExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTopCommonText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseTopCommonText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(MPNewGuideUseAirDrop*, uintptr_t))(Il2CppBase() + 0x316DAC8))(this, Msg);
	}
	template <typename T = void> T OverTimeExit() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316DF64))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316E214))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316E4B8))(this);
	}
	template <typename T = void> T ShowTopCommonText(Il2CppString* guideText) {
		return ((T (*)(MPNewGuideUseAirDrop*, Il2CppString*))(Il2CppBase() + 0x316DD94))(this, guideText);
	}
	template <typename T = void> T CloseTopCommonText() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316E04C))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316E678))(this);
	}
	template <typename T = void> T Update(uintptr_t view) {
		return ((T (*)(MPNewGuideUseAirDrop*, uintptr_t))(Il2CppBase() + 0x316E880))(this, view);
	}
	template <typename T = void> T ShowEffectm__0() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316EAAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(MPNewGuideUseAirDrop*, uintptr_t))(Il2CppBase() + 0x316EAD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OverTimeExit() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316EADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316EAE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316EAE4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(MPNewGuideUseAirDrop*))(Il2CppBase() + 0x316EAE8))(this);
	}

};

}
