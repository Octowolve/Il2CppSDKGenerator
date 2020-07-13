#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class MatchTimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "MatchTimeManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& RoomDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsMatching() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMatchTimeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMatchInterface_PveMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPvpMatchTimeWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPveMatchImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBrMatchTimeWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTempMatchTimeWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsMatching() {
		return ((T (*)(MatchTimeManager*))(Il2CppBase() + 0x2CD7CB8))(this);
	}
	template <typename T = void> T ShowMatchTimeView(bool bSetTimeout) {
		return ((T (*)(MatchTimeManager*, bool))(Il2CppBase() + 0x2CD7CC0))(this, bSetTimeout);
	}
	template <typename T = void> T ShowMatchInterface_PveMission() {
		return ((T (*)(MatchTimeManager*))(Il2CppBase() + 0x2CD8678))(this);
	}
	template <typename T = void> T ShowPvpMatchTimeWindowView(bool bSetTimeout) {
		return ((T (*)(MatchTimeManager*, bool))(Il2CppBase() + 0x2CD83BC))(this, bSetTimeout);
	}
	template <typename T = void> T ShowPveMatchImpl(bool bSetTimeout, bool bShowMatchView) {
		return ((T (*)(MatchTimeManager*, bool, bool))(Il2CppBase() + 0x2CD8094))(this, bSetTimeout, bShowMatchView);
	}
	template <typename T = void> T ShowBrMatchTimeWindowView(bool bSetTimeout) {
		return ((T (*)(MatchTimeManager*, bool))(Il2CppBase() + 0x2CD7EA8))(this, bSetTimeout);
	}
	template <typename T = void> T ShowTempMatchTimeWindowView(bool bSetTimeOut) {
		return ((T (*)(MatchTimeManager*, bool))(Il2CppBase() + 0x2CD85A8))(this, bSetTimeOut);
	}
	template <typename T = void> T ResetToDefault() {
		return ((T (*)(MatchTimeManager*))(Il2CppBase() + 0x2CD882C))(this);
	}

};

}
