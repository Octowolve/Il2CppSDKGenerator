#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ISubDataAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ISubDataAsset"));
	}


	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(ISubDataAsset*, uintptr_t))(Il2CppBase() + 0x0))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ISubDataAsset*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, bytes, position);
	}

};

}
