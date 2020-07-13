#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompMPAreaHighLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_MPAreaHighLight"));
	}

	template <typename T = uintptr_t> T& SpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& AreaSpriteList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_MPVEGame() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& bInited() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTacticalRadarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCreateAreaHighLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AD648))(this);
	}
	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AD724))(this);
	}
	template <typename T = void> T SetTacticalRadarView(uintptr_t radarView) {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*, uintptr_t))(Il2CppBase() + 0x29AD7C4))(this, radarView);
	}
	template <typename T = void> T DelayCreateAreaHighLight() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AD944))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE310))(this);
	}
	template <typename T = uintptr_t> T CreateSpriteInstance(uintptr_t spriteTemplate) {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*, uintptr_t))(Il2CppBase() + 0x29ADC8C))(this, spriteTemplate);
	}
	template <typename T = void> T TickPosition() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29ADEC0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE3C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE6CC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE6D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetTacticalRadarView(uintptr_t P0) {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*, uintptr_t))(Il2CppBase() + 0x29AE6DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE6E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh() {
		return ((T (*)(TacticalRadarCompMPAreaHighLight*))(Il2CppBase() + 0x29AE6EC))(this);
	}

};

}
