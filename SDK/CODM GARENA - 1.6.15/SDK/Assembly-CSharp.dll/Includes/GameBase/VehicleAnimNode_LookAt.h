#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VehicleAnimNodeLookAt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VehicleAnimNode_LookAt"));
	}

	template <typename T = uintptr_t> T& LookAtTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& LookAtAxis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NeedSyncPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& NeedSyncRotation() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& DebugMode() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> T& targetVehicle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AngleChangeAxis() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& initialLocalEuler() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& initialRelativePos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& EnableLocalAxisCompute() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcLookAtDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Update() {
		return ((T (*)(VehicleAnimNodeLookAt*))(Il2CppBase() + 0x27DDF88))(this);
	}
	template <typename T = void> T CalcLookAtDirection() {
		return ((T (*)(VehicleAnimNodeLookAt*))(Il2CppBase() + 0x27DE038))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VehicleAnimNodeLookAt*))(Il2CppBase() + 0x27DE53C))(this);
	}

};

}
