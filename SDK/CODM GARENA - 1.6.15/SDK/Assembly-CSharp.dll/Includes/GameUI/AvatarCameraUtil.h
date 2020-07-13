#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AvatarCameraUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AvatarCameraUtil"));
	}

	template <typename T = uintptr_t> T& CacheCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CacheCameraMirror() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WorkingAnimator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CacheCameraAnimatorsParent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CacheCameraAnimatorList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CacheModelAnimatorsParent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CacheModelAnimatorList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& bRunning() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mShowIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mShowCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mTimeCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mTimeTarget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& cacheAnimatorGroup() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& cacheAnimatorNameList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCustomModelAnims() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCustomCameraAnims() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbortAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<Il2CppString*>*> static T GetAnimationList(uintptr_t showType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D68E58))(0, showType);
	}
	template <typename T = Il2CppString*> static T GetAudioName(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D6916C))(0, index);
	}
	template <typename T = uintptr_t> T LoadCustomModelAnims(Il2CppList<uint32_t>* customModelAnims) {
		return ((T (*)(AvatarCameraUtil*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D69250))(this, customModelAnims);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T LoadCustomCameraAnims(Il2CppList<uint32_t>* customCameraAnims) {
		return ((T (*)(AvatarCameraUtil*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D69798))(this, customCameraAnims);
	}
	template <typename T = void> T ShowAnimation(uintptr_t animatorGroup, int32_t group, Il2CppList<uint32_t>* customCameraAnims) {
		return ((T (*)(AvatarCameraUtil*, uintptr_t, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D69D6C))(this, animatorGroup, group, customCameraAnims);
	}
	template <typename T = void> T ShowByIndex(int32_t index) {
		return ((T (*)(AvatarCameraUtil*, int32_t))(Il2CppBase() + 0x2D6A13C))(this, index);
	}
	template <typename T = uintptr_t> T GetAnimator(Il2CppString* animName) {
		return ((T (*)(AvatarCameraUtil*, Il2CppString*))(Il2CppBase() + 0x2D6A690))(this, animName);
	}
	template <typename T = void> T EndAnimation() {
		return ((T (*)(AvatarCameraUtil*))(Il2CppBase() + 0x2D69FE0))(this);
	}
	template <typename T = void> T AbortAnimation() {
		return ((T (*)(AvatarCameraUtil*))(Il2CppBase() + 0x2D6A864))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarCameraUtil*))(Il2CppBase() + 0x2D6A984))(this);
	}

};

}
