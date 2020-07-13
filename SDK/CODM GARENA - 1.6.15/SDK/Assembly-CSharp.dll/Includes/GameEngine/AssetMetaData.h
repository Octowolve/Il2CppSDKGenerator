#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetMetaData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetMetaData"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MidQualityPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LowQualityPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& DynamicType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& LoadMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& BuildToMobile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_ResourcesKey() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsInvalid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInvalid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIDName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourcesKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsBuildToMobile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetOrdinaryPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetLowQualityPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetMidQualityPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(AssetMetaData*, uintptr_t))(Il2CppBase() + 0x2B7CCC0))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AssetMetaData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B7D0B4))(this, bytes, position);
	}
	template <typename T = bool> T IsInvalid() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B83098))(this);
	}
	template <typename T = bool> static T IsInvalid_1(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2B938CC))(0, id);
	}
	template <typename T = Il2CppString*> T GetIDName() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B98AB0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B98BA0))(this);
	}
	template <typename T = Il2CppString*> T GetResourcesKey() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B98CD0))(this);
	}
	template <typename T = bool> T GetIsBuildToMobile() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B93528))(this);
	}
	template <typename T = Il2CppString*> T GetAssetPath() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B93004))(this);
	}
	template <typename T = Il2CppString*> T GetAssetOrdinaryPath() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B9382C))(this);
	}
	template <typename T = Il2CppString*> T GetAssetLowQualityPath() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B935D0))(this);
	}
	template <typename T = Il2CppString*> T GetAssetMidQualityPath() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B93670))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(AssetMetaData*))(Il2CppBase() + 0x2B98E24))(this);
	}

};

}
