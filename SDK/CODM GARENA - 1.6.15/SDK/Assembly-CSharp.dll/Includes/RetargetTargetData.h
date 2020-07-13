#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RetargetTargetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RetargetTargetData"));
	}

	template <typename T = uintptr_t> T& TargetBone() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& RetargetTrasnlateOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppQuaternion> T& RetargetRotationOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
