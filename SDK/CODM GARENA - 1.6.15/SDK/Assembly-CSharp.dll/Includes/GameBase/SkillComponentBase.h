#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponentBase"));
	}

	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OwnerSkill() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mIsActive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Nudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080CA0))(this);
	}
	template <typename T = void> T Init(uintptr_t inOwnerSkill) {
		return ((T (*)(SkillComponentBase*, uintptr_t))(Il2CppBase() + 0x3080CA8))(this, inOwnerSkill);
	}
	template <typename T = void> T Nudge() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080D74))(this);
	}
	template <typename T = void> T InternalNudge() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080B38))(this);
	}
	template <typename T = uintptr_t> T GetOwnerPawn() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080E2C))(this);
	}
	template <typename T = bool> T CanNudge() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080BFC))(this);
	}
	template <typename T = void> T UnNudge() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080A90))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SkillComponentBase*))(Il2CppBase() + 0x3080F2C))(this);
	}

};

}
