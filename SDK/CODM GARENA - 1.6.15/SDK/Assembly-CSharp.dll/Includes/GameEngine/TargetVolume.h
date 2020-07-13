#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TargetVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TargetVolume"));
	}

	template <typename T = uintptr_t> T& TargetVolumeType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Words() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& JudgeNearCollider() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SighBoardType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& NearDisapear() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& useFarDisapear() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& HeightDisapear() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& FarDisapear() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Param() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CostPoint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bShowSignBoard() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bObjEnable() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> T& m_TargetSignboard() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetSignBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x3433774))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x343389C))(this);
	}
	template <typename T = void> T UnShow() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x34341BC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x3434344))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x34343E8))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x343448C))(this);
	}
	template <typename T = bool> T IsNear(Il2CppVector3 pawnPos) {
		return ((T (*)(TargetVolume*, Il2CppVector3))(Il2CppBase() + 0x3434554))(this, pawnPos);
	}
	template <typename T = bool> T IsFar(Il2CppVector3 pawnPos) {
		return ((T (*)(TargetVolume*, Il2CppVector3))(Il2CppBase() + 0x3434770))(this, pawnPos);
	}
	template <typename T = bool> T IsHeight(Il2CppVector3 pawnPos) {
		return ((T (*)(TargetVolume*, Il2CppVector3))(Il2CppBase() + 0x34348A8))(this, pawnPos);
	}
	template <typename T = uintptr_t> T GetTargetSignBoard() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x3434A04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TargetVolume*))(Il2CppBase() + 0x3434B00))(this);
	}

};

}
