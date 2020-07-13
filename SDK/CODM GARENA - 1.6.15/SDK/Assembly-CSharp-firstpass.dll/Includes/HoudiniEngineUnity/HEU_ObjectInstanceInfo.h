#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUObjectInstanceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ObjectInstanceInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _instancedInputs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _partTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _instancedObjectNodeID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _instancedObjectPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _instances() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
