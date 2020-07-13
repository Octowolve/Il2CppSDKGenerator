#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptimizeBoneInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptimizeBoneInfo"));
	}

	template <typename T = bool> T& m_IsInitBoneInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& BonePaths() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Bones() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& BoneDict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& PathDict() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BindPoses() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBonePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupBoneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetupBoneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPaths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBindPoses() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBindPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OptimizeBoneInfo*))(Il2CppBase() + 0x3EEFDB8))(this);
	}
	template <typename T = Il2CppString*> T GetBonePath(uintptr_t bone, uintptr_t rootBone) {
		return ((T (*)(OptimizeBoneInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EF00D0))(this, bone, rootBone);
	}
	template <typename T = void> T SetupBoneInfo(Il2CppString* rootName) {
		return ((T (*)(OptimizeBoneInfo*, Il2CppString*))(Il2CppBase() + 0x3EF01A0))(this, rootName);
	}
	template <typename T = void> T SetupBoneInfo_1(uintptr_t rootBone) {
		return ((T (*)(OptimizeBoneInfo*, uintptr_t))(Il2CppBase() + 0x3EF035C))(this, rootBone);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPaths(Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(OptimizeBoneInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3EF05DC))(this, bones);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBones(Il2CppArray<uintptr_t>* paths) {
		return ((T (*)(OptimizeBoneInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3EF0890))(this, paths);
	}
	template <typename T = void> T BuildBindPoses(uintptr_t root) {
		return ((T (*)(OptimizeBoneInfo*, uintptr_t))(Il2CppBase() + 0x3EF0AB0))(this, root);
	}
	template <typename T = uintptr_t> T GetBindPose(uintptr_t bone) {
		return ((T (*)(OptimizeBoneInfo*, uintptr_t))(Il2CppBase() + 0x3EF0EE4))(this, bone);
	}

};

}
