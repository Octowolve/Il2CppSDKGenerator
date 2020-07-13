#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ObjectInfo"));
	}

	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& objectInstancePathSH() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& hasTransformChanged() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& haveGeosChanged() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& isVisible() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& isInstancer() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& isInstanced() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& geoCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& nodeId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& objectToInstanceId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
