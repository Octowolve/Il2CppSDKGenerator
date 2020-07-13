#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CsModeEntranceClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CsModeEntranceClient"));
	}

	template <typename T = uint32_t> T& FeaturePriorityInt() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ModeCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& PlaylistId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& MapIds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& FeaturePicCDN() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FeatureDescLocId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsShowFacePic() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsModeAutoChange() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& FacePicCdn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
