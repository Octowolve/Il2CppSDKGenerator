#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class CheckCanCreateAssetFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "CheckCanCreateAssetFunc"));
	}


	template <typename T = bool> T Invoke(uintptr_t pendant) {
		return ((T (*)(CheckCanCreateAssetFunc*, uintptr_t))(Il2CppBase() + 0x3D3FCC4))(this, pendant);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t pendant, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CheckCanCreateAssetFunc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3FD5C))(this, pendant, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(CheckCanCreateAssetFunc*, uintptr_t))(Il2CppBase() + 0x3D3FD88))(this, result);
	}

};

}
