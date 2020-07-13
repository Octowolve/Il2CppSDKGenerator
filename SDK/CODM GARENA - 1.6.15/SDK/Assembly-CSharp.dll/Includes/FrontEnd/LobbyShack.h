#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyShack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyShack"));
	}

	template <typename T = uintptr_t> T& High() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Low() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Ambient() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PreloadList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CasterList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ReceiverList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Floor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LobbyLightRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RankLightRoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NormalLobbyLight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HolidayLobbyLight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mShadowCoroutine() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mOldDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToggleShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHolidayOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T DelayToggleShadow(bool enable, float delay) {
		return ((T (*)(LobbyShack*, bool, float))(Il2CppBase() + 0x36AA488))(this, enable, delay);
	}
	template <typename T = void> T ToggleShadow(bool enable, float delay) {
		return ((T (*)(LobbyShack*, bool, float))(Il2CppBase() + 0x36AA5A4))(this, enable, delay);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(LobbyShack*, bool))(Il2CppBase() + 0x36AA9CC))(this, active);
	}
	template <typename T = void> T SetQuality(bool low) {
		return ((T (*)(LobbyShack*, bool))(Il2CppBase() + 0x36A940C))(this, low);
	}
	template <typename T = void> T ShowRankLight(bool show) {
		return ((T (*)(LobbyShack*, bool))(Il2CppBase() + 0x36AAA9C))(this, show);
	}
	template <typename T = void> T CheckHolidayOpen() {
		return ((T (*)(LobbyShack*))(Il2CppBase() + 0x36AABCC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LobbyShack*))(Il2CppBase() + 0x36AACF0))(this);
	}

};

}
