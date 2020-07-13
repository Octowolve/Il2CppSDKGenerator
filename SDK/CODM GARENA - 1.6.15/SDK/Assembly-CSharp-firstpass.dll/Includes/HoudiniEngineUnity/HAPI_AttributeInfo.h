#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIAttributeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_AttributeInfo"));
	}

	template <typename T = bool> T& exists() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& storage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& originalOwner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& tupleSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& typeInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
