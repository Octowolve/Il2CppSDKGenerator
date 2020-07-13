#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale.Audio.VBSS {

class BRGameVBSSConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale.Audio.VBSS", "BRGameVBSSConfig"));
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
	template <typename T = Il2CppString*> static T& VBSSFrontIntensityPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& VBSSBackIntensityPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& VBSSLeftIntensityPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& VBSSRightIntensityPlayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& VBSSFrontIntensityStopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& VBSSBackIntensityStopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& VBSSLeftIntensityStopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& VBSSRightIntensityStopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& VBSSALLPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}


};

}
