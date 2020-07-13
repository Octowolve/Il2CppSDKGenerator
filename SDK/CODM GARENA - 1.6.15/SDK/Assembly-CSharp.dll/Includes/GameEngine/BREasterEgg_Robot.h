#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BREasterEggRobot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BREasterEgg_Robot"));
	}

	template <typename T = uintptr_t> T& EffectObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& LOCID_Index() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_CurrentAssetID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& bPlayingAnimate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> static T& TIMER_BLOKEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNotifyTypeEnumType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerActorInfoBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuaSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNotEnoughTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAnimate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerBloken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetNotifyTypeEnumType() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3618F98))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619094))(this);
	}
	template <typename T = Il2CppString*> T GetButtonContent() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619134))(this);
	}
	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x36191F8))(this);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619270))(this);
	}
	template <typename T = void> T OnServerActorInfoBind() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619310))(this);
	}
	template <typename T = void> T OnLoadAssetEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BREasterEggRobot*, int32_t, uintptr_t))(Il2CppBase() + 0x361946C))(this, assetId, arg);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619A98))(this);
	}
	template <typename T = void> T OnLuaSyncNotify(uint32_t NotifyType, int32_t value) {
		return ((T (*)(BREasterEggRobot*, uint32_t, int32_t))(Il2CppBase() + 0x3619B68))(this, NotifyType, value);
	}
	template <typename T = void> T PlayNotEnoughTips() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619E6C))(this);
	}
	template <typename T = void> T PlayOpenAnimate() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x3619C64))(this);
	}
	template <typename T = void> T TimerBloken() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A214))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetNotifyTypeEnumType() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A330))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A338))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetButtonContent() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A340))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCheckBeforeInteractive() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerActorInfoBind() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A350))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnCheckBeforeInteractive() {
		return ((T (*)(BREasterEggRobot*))(Il2CppBase() + 0x361A358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLuaSyncNotify(uint32_t P0, int32_t P1) {
		return ((T (*)(BREasterEggRobot*, uint32_t, int32_t))(Il2CppBase() + 0x361A360))(this, P0, P1);
	}

};

}
