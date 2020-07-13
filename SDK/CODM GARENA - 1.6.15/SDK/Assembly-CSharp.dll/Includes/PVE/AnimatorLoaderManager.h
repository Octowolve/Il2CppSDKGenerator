#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AnimatorLoaderManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AnimatorLoaderManager"));
	}

	template <typename T = uintptr_t> static T& m_Inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LoadedInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExtraIncludeAnim() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsMPPVE() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MPPVEExclude() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& m_AnimDict() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_AnimatorDict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LoadedLegacyAnimInfoList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& m_LegacyAnimDict() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillLegacyAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x49BB9C4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AnimatorLoaderManager*))(Il2CppBase() + 0x49BBC68))(this);
	}
	template <typename T = void> T FillAnimator(int32_t pawnType, uintptr_t animator) {
		return ((T (*)(AnimatorLoaderManager*, int32_t, uintptr_t))(Il2CppBase() + 0x49BC224))(this, pawnType, animator);
	}
	template <typename T = void> T FillLegacyAnimation(int32_t pawnType, uintptr_t anim) {
		return ((T (*)(AnimatorLoaderManager*, int32_t, uintptr_t))(Il2CppBase() + 0x49BC534))(this, pawnType, anim);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AnimatorLoaderManager*))(Il2CppBase() + 0x49BC7A4))(this);
	}

};

}
