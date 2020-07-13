#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucOnLoadRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucOnLoadRole"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* inAssetIDs, Il2CppArray<uintptr_t>* inEquipAssetIDs, uintptr_t inObj) {
		return ((T (*)(FucOnLoadRole*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3602264))(this, inAssetIDs, inEquipAssetIDs, inObj);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* inAssetIDs, Il2CppArray<uintptr_t>* inEquipAssetIDs, uintptr_t inObj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucOnLoadRole*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36041B0))(this, inAssetIDs, inEquipAssetIDs, inObj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucOnLoadRole*, uintptr_t))(Il2CppBase() + 0x36041EC))(this, result);
	}

};

}
