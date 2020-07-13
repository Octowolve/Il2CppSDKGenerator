#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSocketData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSocketData"));
	}

	template <typename T = Il2CppString*> T& weaponAssetPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& metaDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(WeaponSocketData*, uintptr_t))(Il2CppBase() + 0x33B8930))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponSocketData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x33B8E24))(this, bytes, position);
	}

};

}
