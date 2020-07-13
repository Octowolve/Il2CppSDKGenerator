#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIVolumeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_VolumeInfo"));
	}

	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& xLength() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& yLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& zLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& minX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& minY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& minZ() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& tupleSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& storage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& tileSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& hasTaper() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& xTaper() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& yTaper() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
