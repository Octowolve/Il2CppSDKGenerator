#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRLevelChristmasTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRLevelChristmasTree"));
	}

	template <typename T = int32_t> T& TriggerItemId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ChristmasTreeAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& FireWorkWorldPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& FireworksEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MaxShowFireworksTimeOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& ColliderHalfExtent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& TriggerHalfExtent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
