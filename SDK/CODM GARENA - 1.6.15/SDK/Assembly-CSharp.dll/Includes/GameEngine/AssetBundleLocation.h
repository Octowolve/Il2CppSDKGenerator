#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleLocation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleLocation"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<Il2CppString*>*>*> T& DynamicInfoDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& m_LocationDic() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RuntimeInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicTypeEffectiveAtRuntime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleDynamicTypeFileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetBundleLocation*, uintptr_t))(Il2CppBase() + 0x2B7A5B0))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetBundleLocation*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B7A844))(this, bytes, position);
	}
	template <typename T = void> T RuntimeInit() {
		return ((T (*)(AssetBundleLocation*))(Il2CppBase() + 0x2B6AEE0))(this);
	}
	template <typename T = bool> T IsDynamicTypeEffectiveAtRuntime(int32_t dynamicType) {
		return ((T (*)(AssetBundleLocation*, int32_t))(Il2CppBase() + 0x2B7AA4C))(this, dynamicType);
	}
	template <typename T = bool> T IsDynamic(Il2CppString* assetbundleName) {
		return ((T (*)(AssetBundleLocation*, Il2CppString*))(Il2CppBase() + 0x2B697D4))(this, assetbundleName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetSingleDynamicTypeFileList(int32_t dynamicType) {
		return ((T (*)(AssetBundleLocation*, int32_t))(Il2CppBase() + 0x2B7AB4C))(this, dynamicType);
	}

};

}
