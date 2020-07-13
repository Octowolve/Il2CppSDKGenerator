#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetCliffComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetCliffComponent"));
	}

	template <typename T = uintptr_t> T& CliffDatabase() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CliffRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cliffList() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_CliffList() {
		return ((T (*)(HEUHoudiniAssetCliffComponent*))(Il2CppBase() + 0x2BD09D8))(this);
	}
	template <typename T = void> T set_CliffList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(HEUHoudiniAssetCliffComponent*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BD09E0))(this, value);
	}
	template <typename T = void> T AddInstance(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetCliffComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2BD09E8))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = void> T ProcessParam() {
		return ((T (*)(HEUHoudiniAssetCliffComponent*))(Il2CppBase() + 0x2BD0B6C))(this);
	}

};

}
