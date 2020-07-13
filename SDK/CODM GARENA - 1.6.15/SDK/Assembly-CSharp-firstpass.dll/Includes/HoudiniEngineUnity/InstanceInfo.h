#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class InstanceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "InstanceInfo"));
	}

	template <typename T = Il2CppString*> T& instanceName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& rotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
