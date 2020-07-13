#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponAK117Orange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponAK117_Orange"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_ContinueKill() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ContinueKillAssetList() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WNWeaponAK117Orange*, uintptr_t, bool))(Il2CppBase() + 0x4594A98))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WNWeaponAK117Orange*))(Il2CppBase() + 0x4594CC4))(this);
	}
	template <typename T = void> T ShowKillEffect(int32_t killNum) {
		return ((T (*)(WNWeaponAK117Orange*, int32_t))(Il2CppBase() + 0x4594D80))(this, killNum);
	}

};

}
