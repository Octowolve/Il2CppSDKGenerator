#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPINodeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_NodeInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& parentId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& totalCookCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& uniqueHoudiniNodeId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& internalNodePathSH() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& parmCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& parmIntValueCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& parmFloatValueCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& parmStringValueCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& parmChoiceCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& childNodeCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& inputCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& createdPostAssetLoad() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
