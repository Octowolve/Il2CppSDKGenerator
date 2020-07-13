#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrainingTargetSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrainingTargetSpot"));
	}

	template <typename T = uintptr_t> T& TargetType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TargetHP() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& TargetIntervalMin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& TargetIntervalMax() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& RelativeLocation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& DstPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = unsigned char> T& bShort() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
