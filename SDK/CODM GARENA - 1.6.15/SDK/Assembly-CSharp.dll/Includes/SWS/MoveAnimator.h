#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class MoveAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "MoveAnimator"));
	}

	template <typename T = uintptr_t> T& sMove() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& nAgent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lastRotY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MoveAnimator*))(Il2CppBase() + 0x3F32D94))(this);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(MoveAnimator*))(Il2CppBase() + 0x3F32EE4))(this);
	}

};

}
