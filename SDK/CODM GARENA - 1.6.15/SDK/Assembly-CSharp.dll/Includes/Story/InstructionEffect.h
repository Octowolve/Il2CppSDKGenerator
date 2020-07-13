#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class InstructionEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "InstructionEffect"));
	}

	template <typename T = bool> T& AutoActivate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EffectMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& EffectSpawnInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CurvePoints() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastSpawnTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EffectList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsActive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpawnAndDespawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectDisappear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildCurvePoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x3957FD0))(this);
	}
	template <typename T = void> T ActiveEffect() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x395841C))(this);
	}
	template <typename T = void> T DeactiveEffect() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x39586DC))(this);
	}
	template <typename T = void> T ClearAllEffect() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x39584D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x3958788))(this);
	}
	template <typename T = void> T UpdateSpawnAndDespawnEffect() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x3958858))(this);
	}
	template <typename T = void> T UpdateEffectMove(float deltaTime) {
		return ((T (*)(InstructionEffect*, float))(Il2CppBase() + 0x3958DC4))(this, deltaTime);
	}
	template <typename T = void> T UpdateEffectDisappear() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x39594D8))(this);
	}
	template <typename T = void> T BuildCurvePoints() {
		return ((T (*)(InstructionEffect*))(Il2CppBase() + 0x3958088))(this);
	}
	template <typename T = Il2CppVector3> T GetPoint(Il2CppArray<uintptr_t>* points, float t) {
		return ((T (*)(InstructionEffect*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x3959930))(this, points, t);
	}

};

}
