#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetSplitData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetSplitData"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& AssetItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MidQualityAssetItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LowQualityAssetItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& defaultID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasDefault() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(AssetSplitData*, uintptr_t))(Il2CppBase() + 0x35C969C))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetSplitData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35C98F0))(this, bytes, position);
	}

};

}
