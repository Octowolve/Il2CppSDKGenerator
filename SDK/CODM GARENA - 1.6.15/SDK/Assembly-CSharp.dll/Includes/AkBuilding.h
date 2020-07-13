#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBuilding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBuilding"));
	}

	template <typename T = int32_t> static T& MAX_ROOMS_PER_PORTAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& portalDatas() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> static T& NeedClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_lastPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& AllPortals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& EnablePortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& mIsActivated() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint64_t> T GetID() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CA2C))(this);
	}
	template <typename T = bool> T get_IsActivated() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A26DB0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CA44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CA4C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CA78))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CF2C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2D16C))(this);
	}
	template <typename T = void> T InitPortalData() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2CC98))(this);
	}
	template <typename T = void> T ActivatePortal(bool active) {
		return ((T (*)(AkBuilding*, bool))(Il2CppBase() + 0x4A2D610))(this, active);
	}
	template <typename T = void> T Open() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A26DB8))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A26DC0))(this);
	}
	template <typename T = void> T _UpdatePosition() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2D19C))(this);
	}
	template <typename T = void> T UpdateWorldShift() {
		return ((T (*)(AkBuilding*))(Il2CppBase() + 0x4A2E07C))(this);
	}
	template <typename T = float> static T GetEnableSqrtDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A26CC0))(0);
	}
	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkBuilding*, uintptr_t))(Il2CppBase() + 0x4A2E114))(this, in_gameObject);
	}
	template <typename T = Il2CppVector3> T _CaculatePoint(Il2CppVector3 dirToRoot) {
		return ((T (*)(AkBuilding*, Il2CppVector3))(Il2CppBase() + 0x4A2E118))(this, dirToRoot);
	}

};

}
