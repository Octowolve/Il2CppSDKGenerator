#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMapEarthCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMapEarthCamera"));
	}

	template <typename T = float> T& m_TurnSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MoveLimit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_OriginalPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& m_OriginalRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_Following() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_TargetPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_FollowFinishedActionOnce() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& kQuaternionOfStaticCamera() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFollowTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LobbyMapEarthCamera*))(Il2CppBase() + 0x36967D4))(this);
	}
	template <typename T = void> T SetFollowTask(Il2CppVector3 followPosition, uintptr_t finishedCallBack) {
		return ((T (*)(LobbyMapEarthCamera*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x36943A4))(this, followPosition, finishedCallBack);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyMapEarthCamera*))(Il2CppBase() + 0x36968F4))(this);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(LobbyMapEarthCamera*))(Il2CppBase() + 0x3696C10))(this);
	}
	template <typename T = void> T ResetTransform() {
		return ((T (*)(LobbyMapEarthCamera*))(Il2CppBase() + 0x3696CD4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LobbyMapEarthCamera*))(Il2CppBase() + 0x36945C4))(this);
	}

};

}
