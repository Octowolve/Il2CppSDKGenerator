#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SkillStepInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SkillStepInfo"));
	}

	template <typename T = unsigned char> T& SeqNo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& RefreshData() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& StopSkill() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = float> T& RotateTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RotateEndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& RotateCurrentPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& RotateDestPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& PreAttackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& EndAttackTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& AttackTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& CurrentServerPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& PreAttackDestPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& DestPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& EndAttackDestPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& FireType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& CurrentStep() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& AttackParam1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = unsigned char> T& BehaviorIdx() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& AttackStepParam() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindTargetByAttackParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPawnByAttackParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(SkillStepInfo*))(Il2CppBase() + 0x435A948))(this);
	}
	template <typename T = uintptr_t> T FindTargetByAttackParam() {
		return ((T (*)(SkillStepInfo*))(Il2CppBase() + 0x435AA4C))(this);
	}
	template <typename T = uintptr_t> T FindPawnByAttackParam() {
		return ((T (*)(SkillStepInfo*))(Il2CppBase() + 0x435AC44))(this);
	}

};

}
