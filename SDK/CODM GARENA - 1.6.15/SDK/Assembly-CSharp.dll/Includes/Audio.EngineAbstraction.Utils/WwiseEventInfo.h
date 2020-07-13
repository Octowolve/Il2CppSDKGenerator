#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Utils {

class WwiseEventInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Utils", "WwiseEventInfo"));
	}

	template <typename T = uint32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& NameLower() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MaxAttenuation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SqrtMaxAttenuation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& DurationType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DurationMin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DurationMax() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& RangeCheck() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Banks() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
