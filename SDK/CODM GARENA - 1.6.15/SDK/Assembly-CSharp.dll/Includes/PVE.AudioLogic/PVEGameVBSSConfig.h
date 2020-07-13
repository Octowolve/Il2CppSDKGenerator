#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.AudioLogic {

class PVEGameVBSSConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.AudioLogic", "PVEGameVBSSConfig"));
	}

	template <typename T = float> static T& DistanceFilterFromLP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VBSSIntensityRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& VBSSFrontIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& VBSSBackIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& VBSSLeftIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& VBSSRightIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}


};

}
