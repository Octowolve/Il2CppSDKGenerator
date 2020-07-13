#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetInstanceDatabase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetInstanceDatabase"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& InstanceList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T AddInstance(uintptr_t instanceInfo) {
		return ((T (*)(HEUHoudiniAssetInstanceDatabase*, uintptr_t))(Il2CppBase() + 0x2BD31DC))(this, instanceInfo);
	}
	template <typename T = void> T AddInstances(Il2CppList<uintptr_t>* instanceInfos) {
		return ((T (*)(HEUHoudiniAssetInstanceDatabase*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BD32AC))(this, instanceInfos);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HEUHoudiniAssetInstanceDatabase*))(Il2CppBase() + 0x2BD334C))(this);
	}

};

}
