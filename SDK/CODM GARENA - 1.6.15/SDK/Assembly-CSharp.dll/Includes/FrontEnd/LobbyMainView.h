#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMainView"));
	}

	template <typename T = uintptr_t> T& m_Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_FrontEndEffects() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_FrontEndEffectsHigh() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TopBg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayFrontEndEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LobbyMainView*))(Il2CppBase() + 0x3691580))(this);
	}
	template <typename T = void> T DisplayFrontEndEffects(bool display) {
		return ((T (*)(LobbyMainView*, bool))(Il2CppBase() + 0x3691720))(this, display);
	}
	template <typename T = uintptr_t> T ShowAnimation(Il2CppVector3 from, Il2CppVector3 to, float durationSeconds) {
		return ((T (*)(LobbyMainView*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3691800))(this, from, to, durationSeconds);
	}
	template <typename T = void> T ShowAnimation_1(uintptr_t go, Il2CppVector3 from, Il2CppVector3 to, float durationSeconds) {
		return ((T (*)(LobbyMainView*, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x369195C))(this, go, from, to, durationSeconds);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LobbyMainView*))(Il2CppBase() + 0x3691AB0))(this);
	}

};

}
