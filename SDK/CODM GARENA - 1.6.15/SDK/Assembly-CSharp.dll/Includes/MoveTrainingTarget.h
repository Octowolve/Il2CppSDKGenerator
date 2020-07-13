#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveTrainingTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveTrainingTarget"));
	}

	template <typename T = uintptr_t> T& m_MoveRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_StartPoint() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_EndPoint() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_WaitTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& m_Forward() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_IsMove() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsForward() {
		return *(T*)((uintptr_t)this + 0xED);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WaitAndStartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppVector3> T get_MoveTarget() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C0A8))(this);
	}
	template <typename T = Il2CppVector3> T get_MoveForward() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C0E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C140))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C280))(this);
	}
	template <typename T = uintptr_t> T WaitAndStartMove() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C504))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C5EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(MoveTrainingTarget*))(Il2CppBase() + 0x331C5F4))(this);
	}

};

}
