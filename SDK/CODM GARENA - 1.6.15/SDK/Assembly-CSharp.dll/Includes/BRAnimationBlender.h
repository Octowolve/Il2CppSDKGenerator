#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRAnimationBlender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRAnimationBlender"));
	}

	template <typename T = uintptr_t> T& BlendToClip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BlendTransitionTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Rigs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BoneRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& RecordTransformAttr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AnimatorControllerTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TickBlendTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_RootTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_StartBlendTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsStart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsCheckCrouch() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& m_IsCheckProne() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = float> T& m_RecordeAnimatorMinUpdateinterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordRigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverMinUpdateinterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAnimate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnimate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllRigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterRigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C2244))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C23D8))(this);
	}
	template <typename T = void> T RecordRigs() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C2AFC))(this);
	}
	template <typename T = void> T RecoverMinUpdateinterval() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C2E0C))(this);
	}
	template <typename T = void> T TickBlend() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C247C))(this);
	}
	template <typename T = void> T StartAnimate(bool isCrouch, bool isProne) {
		return ((T (*)(BRAnimationBlender*, bool, bool))(Il2CppBase() + 0x35C2EA4))(this, isCrouch, isProne);
	}
	template <typename T = void> T StopAnimate() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C3008))(this);
	}
	template <typename T = void> T CheckAllRigs() {
		return ((T (*)(BRAnimationBlender*))(Il2CppBase() + 0x35C30DC))(this);
	}
	template <typename T = void> T FilterRigs(Il2CppList<Il2CppString*>* rigList) {
		return ((T (*)(BRAnimationBlender*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x35C3410))(this, rigList);
	}
	template <typename T = void> T RecordBones(uintptr_t parent) {
		return ((T (*)(BRAnimationBlender*, uintptr_t))(Il2CppBase() + 0x35C31C4))(this, parent);
	}

};

}
