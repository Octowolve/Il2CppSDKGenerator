#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIImageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ImageInfo"));
	}

	template <typename T = int32_t> T& imageFileFormatNameSH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& xRes() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& yRes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dataFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& interleaved() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& packing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = double> T& gamma() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
