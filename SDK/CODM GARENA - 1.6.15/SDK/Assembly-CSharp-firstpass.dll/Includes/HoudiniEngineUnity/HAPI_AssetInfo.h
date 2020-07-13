#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIAssetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_AssetInfo"));
	}

	template <typename T = int32_t> T& nodeId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& objectNodeId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& hasEverCooked() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& labelSH() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& filePathSH() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& versionSH() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& fullOpNameSH() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& helpTextSH() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& objectCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& handleCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& transformInputCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& geoInputCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& haveObjectsChanged() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& haveMaterialsChanged() {
		return *(T*)((uintptr_t)this + 0x35);
	}


};

}
