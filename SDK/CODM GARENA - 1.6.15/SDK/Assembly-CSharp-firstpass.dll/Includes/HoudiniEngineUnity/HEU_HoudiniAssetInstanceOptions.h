#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetInstanceOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetInstanceOptions"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& InstanceConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _instanceDataDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnValidate() {
		return ((T (*)(HEUHoudiniAssetInstanceOptions*))(Il2CppBase() + 0x2BD34C4))(this);
	}
	template <typename T = uintptr_t> T GetInstanceDataByName(Il2CppString* name) {
		return ((T (*)(HEUHoudiniAssetInstanceOptions*, Il2CppString*))(Il2CppBase() + 0x2BD2FA4))(this, name);
	}

};

}
