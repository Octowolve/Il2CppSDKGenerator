#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class RotateTo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "RotateTo"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_RotateObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_SmoothRotate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_SmoothCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_RotSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppQuaternion> T& realRot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& getPawn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& startSmoothRotate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x40544C0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x4054568))(this);
	}
	template <typename T = Il2CppVector3> T CalcDirection() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x405488C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x40549E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x4054C68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x4054C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate() {
		return ((T (*)(RotateTo*))(Il2CppBase() + 0x4054C78))(this);
	}

};

}
