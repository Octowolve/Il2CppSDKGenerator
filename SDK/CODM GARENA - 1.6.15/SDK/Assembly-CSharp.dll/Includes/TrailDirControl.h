#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrailDirControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrailDirControl"));
	}

	template <typename T = uintptr_t> T& m_jetpack() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_localAxis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_trailNodePosFoe() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_movDir() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_A() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_trailRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_isLeftTrail() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_angle_startRot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_angle_endRot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_InLobby() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LobbyVirtualSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CachedCamera() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_m_InLobby() {
		return ((T (*)(TrailDirControl*))(Il2CppBase() + 0x49679D4))(this);
	}
	template <typename T = void> T set_m_InLobby(bool value) {
		return ((T (*)(TrailDirControl*, bool))(Il2CppBase() + 0x49679DC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TrailDirControl*))(Il2CppBase() + 0x49679E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TrailDirControl*))(Il2CppBase() + 0x4967B84))(this);
	}

};

}
