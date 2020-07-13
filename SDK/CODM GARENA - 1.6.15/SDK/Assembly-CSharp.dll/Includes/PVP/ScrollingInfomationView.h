#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ScrollingInfomationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ScrollingInfomationView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& RoomInfoLabels() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& KillerNames() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DeathNames() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& KillerWeapons() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IconSprites() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_KillsCountLabels() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& KillInfoContainers() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Bayonets() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& CONTINUOUS_KILL_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HEAD_SHOT_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& THROUGH_KILL_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SUICIDE_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> T& m_AnchorList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& m_WeaponId2IconName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_ShouldUpdateAnchorsThisFrame() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheNickFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchorList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchorsLater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillInfoUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoomInfoUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B1E170))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B1E27C))(this);
	}
	template <typename T = void> T CacheNickFont(Il2CppString* nick) {
		return ((T (*)(ScrollingInfomationView*, Il2CppString*))(Il2CppBase() + 0x2B1D570))(this, nick);
	}
	template <typename T = void> T UpdateAnchorList(int32_t index) {
		return ((T (*)(ScrollingInfomationView*, int32_t))(Il2CppBase() + 0x2B1E84C))(this, index);
	}
	template <typename T = void> T UpdateAnchorsLater() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B1DFB0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B1E9B8))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B1D894))(this);
	}
	template <typename T = void> T UpdateKillInfoUI(int32_t index, uintptr_t data) {
		return ((T (*)(ScrollingInfomationView*, int32_t, uintptr_t))(Il2CppBase() + 0x2B1EAC4))(this, index, data);
	}
	template <typename T = void> T UpdateRoomInfoUI(int32_t index, uintptr_t data) {
		return ((T (*)(ScrollingInfomationView*, int32_t, uintptr_t))(Il2CppBase() + 0x2B1FAD8))(this, index, data);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B20098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ScrollingInfomationView*))(Il2CppBase() + 0x2B200A0))(this);
	}

};

}
