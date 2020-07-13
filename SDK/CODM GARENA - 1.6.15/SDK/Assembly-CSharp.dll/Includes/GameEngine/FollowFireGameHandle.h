#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FollowFireGameHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FollowFireGameHandle"));
	}

	template <typename T = uintptr_t> T& m_RightInputState() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsOpenFireMoveFollow() {
		return ((T (*)(FollowFireGameHandle*))(Il2CppBase() + 0x51BFD54))(this);
	}

};

}
