#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetSplitItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetSplitItemData"));
	}

	template <typename T = bool> T& IsResSurport() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsFirstPackage() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& IsSilentDownload() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& assetSplitLevel() {
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
		return ((T (*)(AssetSplitItemData*, uintptr_t))(Il2CppBase() + 0x35C97D8))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetSplitItemData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35C9A80))(this, bytes, position);
	}

};

}
