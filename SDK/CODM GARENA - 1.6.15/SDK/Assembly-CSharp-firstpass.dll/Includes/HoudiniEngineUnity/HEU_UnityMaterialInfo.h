#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUUnityMaterialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_UnityMaterialInfo"));
	}

	template <typename T = Il2CppString*> T& _unityMaterialPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _substancePath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _substanceIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
