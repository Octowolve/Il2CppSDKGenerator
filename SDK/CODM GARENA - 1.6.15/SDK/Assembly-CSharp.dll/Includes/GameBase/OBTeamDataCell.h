#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OBTeamDataCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OBTeamDataCell"));
	}

	template <typename T = uint32_t> T& TeamID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Members() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasMemberNearby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddMember(uintptr_t pi) {
		return ((T (*)(OBTeamDataCell*, uintptr_t))(Il2CppBase() + 0x1622558))(this, pi);
	}
	template <typename T = bool> T HasMemberNearby(float distance) {
		return ((T (*)(OBTeamDataCell*, float))(Il2CppBase() + 0x1622730))(this, distance);
	}
	template <typename T = int32_t> static T AddMemberm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1622AA4))(0, a, b);
	}

};

}
