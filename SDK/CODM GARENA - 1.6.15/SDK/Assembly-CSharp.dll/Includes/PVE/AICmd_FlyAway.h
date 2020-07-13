#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdFlyAway
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_FlyAway"));
	}

	template <typename T = Il2CppVector3> T& m_DestPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DestOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_NeedRotateToDestRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_RandomSpeed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdFlyAway*, uintptr_t))(Il2CppBase() + 0x4CE87E0))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE896C))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE8A20))(this);
	}
	template <typename T = bool> T MoveToTarget(Il2CppVector3 targetPos, float dis) {
		return ((T (*)(AICmdFlyAway*, Il2CppVector3, float))(Il2CppBase() + 0x4CE8AD4))(this, targetPos, dis);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE8CDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE8DC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE8DCC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdFlyAway*))(Il2CppBase() + 0x4CE8DD4))(this);
	}

};

}
