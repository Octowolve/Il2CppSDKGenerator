#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaterVolumeExporter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterVolumeExporter"));
	}

	template <typename T = float> T& MinObbLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& AddDepth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsRiver() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
