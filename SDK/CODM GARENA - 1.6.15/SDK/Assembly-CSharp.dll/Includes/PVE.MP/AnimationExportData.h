#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class AnimationExportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "AnimationExportData"));
	}

	template <typename T = uintptr_t> T& animClip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& sampleInterval() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& meshAsset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& fireType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
