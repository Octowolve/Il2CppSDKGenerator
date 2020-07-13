#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankLobbyExtraView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankLobbyExtraView"));
	}

	template <typename T = uintptr_t> T& BrBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PvpBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ZbBtn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& tabMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RankLobbyExtraView*))(Il2CppBase() + 0x380F620))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RankLobbyExtraView*))(Il2CppBase() + 0x380F958))(this);
	}
	template <typename T = uintptr_t> T SetTabScript(uintptr_t btn, uintptr_t type, bool invisible) {
		return ((T (*)(RankLobbyExtraView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x380F7A8))(this, btn, type, invisible);
	}
	template <typename T = void> T OnBtnClick(int32_t index) {
		return ((T (*)(RankLobbyExtraView*, int32_t))(Il2CppBase() + 0x380FAB0))(this, index);
	}

};

}
