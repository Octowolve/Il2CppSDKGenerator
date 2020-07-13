#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class JetPackCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "JetPackCamera"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CameraEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CameraEffect_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LandEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpeedUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T PreloadRes(bool isLocalPlayer) {
		return ((T (*)(JetPackCamera*, bool))(Il2CppBase() + 0x3D538C0))(this, isLocalPlayer);
	}
	template <typename T = void> T BindPlayer(uintptr_t owner) {
		return ((T (*)(JetPackCamera*, uintptr_t))(Il2CppBase() + 0x3D53CB0))(this, owner);
	}
	template <typename T = void> T ShowSpeedUpEffect(bool show) {
		return ((T (*)(JetPackCamera*, bool))(Il2CppBase() + 0x3D54058))(this, show);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(JetPackCamera*))(Il2CppBase() + 0x3D54178))(this);
	}
	template <typename T = void> T PlayLandEffect() {
		return ((T (*)(JetPackCamera*))(Il2CppBase() + 0x3D54354))(this);
	}
	template <typename T = void> T StopLandEffect() {
		return ((T (*)(JetPackCamera*))(Il2CppBase() + 0x3D5456C))(this);
	}

};

}
