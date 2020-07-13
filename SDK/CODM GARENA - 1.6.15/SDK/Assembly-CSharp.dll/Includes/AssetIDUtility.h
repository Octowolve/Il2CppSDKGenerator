#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetIDUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetIDUtility"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*> static T& AssetReplaceDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID_Korea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID_VNG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetAssetID(uintptr_t ID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D3B40))(0, ID);
	}
	template <typename T = uintptr_t> static T GetAssetID_Korea(uintptr_t ID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D3C10))(0, ID);
	}
	template <typename T = uintptr_t> static T GetAssetID_VNG(uintptr_t ID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D3DA4))(0, ID);
	}

};

}
