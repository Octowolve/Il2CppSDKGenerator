#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttackPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttackPlayerInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& TargetPawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& DstPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsLockTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AttackPlayerInfo*))(Il2CppBase() + 0x3476428))(this);
	}
	template <typename T = void> T ClearEffect() {
		return ((T (*)(AttackPlayerInfo*))(Il2CppBase() + 0x34788D4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AttackPlayerInfo*))(Il2CppBase() + 0x3478B70))(this);
	}

};

}
