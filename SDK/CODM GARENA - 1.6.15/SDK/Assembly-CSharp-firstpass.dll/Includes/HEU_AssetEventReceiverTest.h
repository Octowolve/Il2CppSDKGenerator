#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HEUAssetEventReceiverTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HEU_AssetEventReceiverTest"));
	}


	template <typename T = void> T ReloadCallback(uintptr_t asset, bool success, Il2CppList<uintptr_t>* outputList) {
		return ((T (*)(HEUAssetEventReceiverTest*, uintptr_t, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C5EFB0))(this, asset, success, outputList);
	}
	template <typename T = void> T CookedCallback(uintptr_t asset, bool success, Il2CppList<uintptr_t>* outputList) {
		return ((T (*)(HEUAssetEventReceiverTest*, uintptr_t, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C5F21C))(this, asset, success, outputList);
	}
	template <typename T = void> T BakedCallback(uintptr_t asset, bool success, Il2CppList<uintptr_t>* outputList) {
		return ((T (*)(HEUAssetEventReceiverTest*, uintptr_t, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C5F488))(this, asset, success, outputList);
	}

};

}
