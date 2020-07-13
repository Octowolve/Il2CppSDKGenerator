#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicSkinInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicSkinInfo"));
	}

	template <typename T = bool> T& m_IsInitSkinInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_BonePaths() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_RootBones() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ModelNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ModelSkinnedBoneStartIndexes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ModelSkinnedRootBoneIndexes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ExtraNonSkinnedBones() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Targets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransplantBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransplantBoneFromPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransplantSingleBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSkinToOtherRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseOrignalRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupSkinInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexesOfCharacterInAString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelBoneStartIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelRootBoneIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDynamicSkinBoneRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getBonePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExtraNonSkinnedBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtraBoneShouldBeTransplant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraverseExtraNonSkinnedBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DynamicSkinInfo*))(Il2CppBase() + 0x4B9DA14))(this);
	}
	template <typename T = void> T TransplantBones(uintptr_t targetBone, uintptr_t dsbrm, bool reserveOriginalBone) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4B9DAFC))(this, targetBone, dsbrm, reserveOriginalBone);
	}
	template <typename T = void> T TransplantBoneFromPath(uintptr_t targetBone, Il2CppString* bonePath, uintptr_t dsbrm, bool reserveOriginalBone) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4B9E440))(this, targetBone, bonePath, dsbrm, reserveOriginalBone);
	}
	template <typename T = void> T TransplantSingleBone(uintptr_t targetBone, Il2CppString* relativePath, uintptr_t dsbrm, bool reserveOriginalBone) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4B9E830))(this, targetBone, relativePath, dsbrm, reserveOriginalBone);
	}
	template <typename T = void> T ReSkinToOtherRoot(uintptr_t smr, uintptr_t otherRoot) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B9EC54))(this, smr, otherRoot);
	}
	template <typename T = void> T TraverseOrignalRoot(uintptr_t originalRoot, uintptr_t dsbrm) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B9E0A8))(this, originalRoot, dsbrm);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetBones(Il2CppString* modelName) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4B9F9BC))(this, modelName);
	}
	template <typename T = Il2CppString*> T GetRootBone(Il2CppString* modelName) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4B9FE98))(this, modelName);
	}
	template <typename T = void> T SetupSkinInfo() {
		return ((T (*)(DynamicSkinInfo*))(Il2CppBase() + 0x4BA019C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndexesOfCharacterInAString(Il2CppString* str, char c) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*, char))(Il2CppBase() + 0x4B9E68C))(this, str, c);
	}
	template <typename T = int32_t> T GetModelIndex(Il2CppString* modelName) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4B9FD0C))(this, modelName);
	}
	template <typename T = int32_t> T GetModelBoneStartIndex(Il2CppString* modelName) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4B9F1D8))(this, modelName);
	}
	template <typename T = int32_t> T GetModelRootBoneIndex(Il2CppString* modelName) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4B9F398))(this, modelName);
	}
	template <typename T = void> T AddDynamicSkinBoneRef(Il2CppString* str) {
		return ((T (*)(DynamicSkinInfo*, Il2CppString*))(Il2CppBase() + 0x4BA0B2C))(this, str);
	}
	template <typename T = Il2CppString*> T getBonePath(uintptr_t bone, uintptr_t rootBone) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B9F558))(this, bone, rootBone);
	}
	template <typename T = bool> T IsExtraNonSkinnedBone(uintptr_t t) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t))(Il2CppBase() + 0x4BA0BCC))(this, t);
	}
	template <typename T = bool> T ExtraBoneShouldBeTransplant(uintptr_t t) {
		return ((T (*)(DynamicSkinInfo*, uintptr_t))(Il2CppBase() + 0x4BA0DCC))(this, t);
	}
	template <typename T = void> T TraverseExtraNonSkinnedBones() {
		return ((T (*)(DynamicSkinInfo*))(Il2CppBase() + 0x4BA0710))(this);
	}

};

}
