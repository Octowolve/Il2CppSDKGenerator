#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FlightEffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlightEffectData"));
	}

	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_IsFinished() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_CurPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DelayTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ExistTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& angleSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& accerletion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAccelDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(FlightEffectData*, float))(Il2CppBase() + 0x3B8AFA8))(this, deltaTime);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(FlightEffectData*))(Il2CppBase() + 0x3B8AFB0))(this);
	}
	template <typename T = Il2CppVector3> T CalcAccelDir(float deltaTime) {
		return ((T (*)(FlightEffectData*, float))(Il2CppBase() + 0x3B8AFB8))(this, deltaTime);
	}

};

}
