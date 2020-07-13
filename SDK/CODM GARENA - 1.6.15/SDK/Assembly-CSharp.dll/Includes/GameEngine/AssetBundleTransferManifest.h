#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleTransferManifest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleTransferManifest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& IdToABName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ABDependencies() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int16_t>*> T& m_abNameToId() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromAssetBundleManifest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexFromBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBundleNameFromIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetBundleTransferManifest*, uintptr_t))(Il2CppBase() + 0x2B7BD58))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetBundleTransferManifest*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B7BE90))(this, bytes, position);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(AssetBundleTransferManifest*))(Il2CppBase() + 0x2B7C0B0))(this);
	}
	template <typename T = void> T InitFromAssetBundleManifest(uintptr_t m) {
		return ((T (*)(AssetBundleTransferManifest*, uintptr_t))(Il2CppBase() + 0x2B7C250))(this, m);
	}
	template <typename T = void> T GetAllDependencies(int16_t bundleIndex, Il2CppList<int16_t>* deps) {
		return ((T (*)(AssetBundleTransferManifest*, int16_t, Il2CppList<int16_t>*))(Il2CppBase() + 0x2B6D320))(this, bundleIndex, deps);
	}
	template <typename T = int16_t> T GetIndexFromBundleName(Il2CppString* name) {
		return ((T (*)(AssetBundleTransferManifest*, Il2CppString*))(Il2CppBase() + 0x2B7C80C))(this, name);
	}
	template <typename T = Il2CppString*> T GetBundleNameFromIndex(int16_t index) {
		return ((T (*)(AssetBundleTransferManifest*, int16_t))(Il2CppBase() + 0x2B7C930))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(AssetBundleTransferManifest*))(Il2CppBase() + 0x2B7CA1C))(this);
	}

};

}
