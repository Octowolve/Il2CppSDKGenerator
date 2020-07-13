#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIPawnAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIPawnAnimationComponent"));
	}

	template <typename T = uintptr_t> T& m_SoundHandler() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppString*> T& moveSpeedParamName() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& moveSpeedParamHash() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& m_LastAnimSpeed() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& disableRotationAnim() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& fixedAnimMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& pawnOwner() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppString*> T& rotateParamName() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& rotateParamHash() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& rotateByRM() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& lastTurn() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& kMinTurnAngle() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFixedAnimMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotationParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_disableRotationAnim() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA386C))(this);
	}
	template <typename T = void> T set_disableRotationAnim(bool value) {
		return ((T (*)(NetworkAIPawnAnimationComponent*, bool))(Il2CppBase() + 0x3EA3874))(this, value);
	}
	template <typename T = void> T SetFixedAnimMoveSpeed(float animMoveSpeed) {
		return ((T (*)(NetworkAIPawnAnimationComponent*, float))(Il2CppBase() + 0x3EA387C))(this, animMoveSpeed);
	}
	template <typename T = void> T Init(uintptr_t mesh) {
		return ((T (*)(NetworkAIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x3EA3934))(this, mesh);
	}
	template <typename T = void> T UpdateMoveParam() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA3E30))(this);
	}
	template <typename T = void> T UpdateRotationParam() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA413C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA4448))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA45F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(NetworkAIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x3EA469C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LateUpdate() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA46A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(NetworkAIPawnAnimationComponent*))(Il2CppBase() + 0x3EA46AC))(this);
	}

};

}
