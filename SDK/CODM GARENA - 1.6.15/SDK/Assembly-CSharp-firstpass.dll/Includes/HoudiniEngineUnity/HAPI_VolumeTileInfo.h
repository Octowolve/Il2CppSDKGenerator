#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIVolumeTileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_VolumeTileInfo"));
	}

	template <typename T = int32_t> T& minX() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& minY() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& minZ() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
