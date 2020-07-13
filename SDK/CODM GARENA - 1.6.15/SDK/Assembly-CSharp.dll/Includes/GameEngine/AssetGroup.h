#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetGroup"));
	}

	template <typename T = uintptr_t> T& Category() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Tag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AssetInfo() {
		return *(T*)((uintptr_t)this + 0x14);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMetaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetGroup*, uintptr_t))(Il2CppBase() + 0x2B7CAFC))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetGroup*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B7CDF0))(this, bytes, position);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AssetGroup*))(Il2CppBase() + 0x2B7D220))(this);
	}
	template <typename T = uintptr_t> T FindMetaData(int32_t assetID) {
		return ((T (*)(AssetGroup*, int32_t))(Il2CppBase() + 0x2B7D3B8))(this, assetID);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(AssetGroup*))(Il2CppBase() + 0x2B7D4FC))(this);
	}

};

}
