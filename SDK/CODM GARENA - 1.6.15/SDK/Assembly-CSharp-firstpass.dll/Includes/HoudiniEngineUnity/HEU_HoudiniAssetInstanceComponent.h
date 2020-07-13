#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetInstanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetInstanceComponent"));
	}

	template <typename T = uintptr_t> T& Options() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T AddInstance(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetInstanceComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x0))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = void> T ProcessParam() {
		return ((T (*)(HEUHoudiniAssetInstanceComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetInstanceType(Il2CppString* instanceName) {
		return ((T (*)(HEUHoudiniAssetInstanceComponent*, Il2CppString*))(Il2CppBase() + 0x2BD123C))(this, instanceName);
	}
	template <typename T = uintptr_t> T GetInstancePrefab(Il2CppString* instanceName) {
		return ((T (*)(HEUHoudiniAssetInstanceComponent*, Il2CppString*))(Il2CppBase() + 0x2BD2EB8))(this, instanceName);
	}

};

}
