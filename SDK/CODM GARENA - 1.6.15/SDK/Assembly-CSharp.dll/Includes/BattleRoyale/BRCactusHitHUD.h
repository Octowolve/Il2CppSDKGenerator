#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCactusHitHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCactusHitHUD"));
	}

	template <typename T = uintptr_t> T& HitImg() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TargetArrowObj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& CenterOffset() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& lastHitPos() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastCactusHitPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHitImg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHudPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRCactusHitHUD*))(Il2CppBase() + 0x24E4B88))(this);
	}
	template <typename T = void> T SetLastCactusHitPos(Il2CppVector3 pos) {
		return ((T (*)(BRCactusHitHUD*, Il2CppVector3))(Il2CppBase() + 0x24E4C44))(this, pos);
	}
	template <typename T = void> T ShowHitImg() {
		return ((T (*)(BRCactusHitHUD*))(Il2CppBase() + 0x24E4D14))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRCactusHitHUD*))(Il2CppBase() + 0x24E5058))(this);
	}
	template <typename T = void> T SetHudPos() {
		return ((T (*)(BRCactusHitHUD*))(Il2CppBase() + 0x24E4E10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRCactusHitHUD*))(Il2CppBase() + 0x24E51D0))(this);
	}

};

}
