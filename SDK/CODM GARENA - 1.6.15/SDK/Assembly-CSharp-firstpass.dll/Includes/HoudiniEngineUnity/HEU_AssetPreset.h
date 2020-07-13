#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAssetPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AssetPreset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _identifier() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _assetOPName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _parameterPreset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _curveNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _curvePresets() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
