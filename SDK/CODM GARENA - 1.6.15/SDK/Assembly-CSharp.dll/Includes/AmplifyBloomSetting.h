#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AmplifyBloomSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AmplifyBloomSetting"));
	}

	template <typename T = float> T& Intensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Threshold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& BlurRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SrcDownScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SourceContribution() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& UpscaleContribution() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
