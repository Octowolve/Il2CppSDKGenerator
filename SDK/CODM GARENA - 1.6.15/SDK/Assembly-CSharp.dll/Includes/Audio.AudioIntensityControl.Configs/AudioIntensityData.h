#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioIntensityControl.Configs {

class AudioIntensityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioIntensityControl.Configs", "AudioIntensityData"));
	}

	template <typename T = Il2CppString*> static T& kDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IgnoredEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EventTier1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RTPCTier1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& DetectRangeTire1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EventTier2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& RTPCTier2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DetectRangeTire2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EventTier3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RTPCTier3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& DetectRangeTire3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& RTPCOthers() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& DetectRangeOthers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadIntensityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T LoadIntensityData() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D27F8))(0);
	}

};

}
