#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BREasterEggScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BREasterEgg_Screen"));
	}

	template <typename T = uintptr_t> T& OnlineAnim() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_CurrentAssetID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bAreadyOn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> static T& DELAY_PLAY_SOUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DELAY_SWITCH_OFF() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerActorInfoBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuaSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TipGetRepair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayPlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySwicthOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetNotifyTypeEnumType() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361ACD8))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361ADD4))(this);
	}
	template <typename T = Il2CppString*> T GetButtonContent() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361AE74))(this);
	}
	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361AF38))(this);
	}
	template <typename T = void> T OnServerActorInfoBind() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361AFB0))(this);
	}
	template <typename T = void> T OnLoadAssetEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BREasterEggScreen*, int32_t, uintptr_t))(Il2CppBase() + 0x361B10C))(this, assetId, arg);
	}
	template <typename T = void> T OnLuaSyncNotify(uint32_t NotifyType, int32_t value) {
		return ((T (*)(BREasterEggScreen*, uint32_t, int32_t))(Il2CppBase() + 0x361B3F8))(this, NotifyType, value);
	}
	template <typename T = void> T TipGetRepair() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361B4DC))(this);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361B72C))(this);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361B7CC))(this);
	}
	template <typename T = void> T SwitchOn() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361B884))(this);
	}
	template <typename T = void> T DelayPlayOneShot() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BA10))(this);
	}
	template <typename T = void> T DelaySwicthOff() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BB54))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetNotifyTypeEnumType() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCBC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCC4))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetButtonContent() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerActorInfoBind() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLuaSyncNotify(uint32_t P0, int32_t P1) {
		return ((T (*)(BREasterEggScreen*, uint32_t, int32_t))(Il2CppBase() + 0x361BCDC))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCheckBeforeInteractive() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCE4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnCheckBeforeInteractive() {
		return ((T (*)(BREasterEggScreen*))(Il2CppBase() + 0x361BCEC))(this);
	}

};

}
