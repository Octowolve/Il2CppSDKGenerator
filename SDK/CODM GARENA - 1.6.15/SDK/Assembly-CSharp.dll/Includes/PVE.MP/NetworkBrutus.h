#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBrutus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBrutus"));
	}

	template <typename T = uintptr_t> T& m_dismember() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = bool> T& helmetDropped() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = Il2CppString*> T& kDefaultStateName() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = int32_t> T& kDefaultStateNameID() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBodyFragment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpecialSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB7EE4))(this);
	}
	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkBrutus*, uintptr_t))(Il2CppBase() + 0x3EB80FC))(this, info);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB84E8))(this);
	}
	template <typename T = void> T PlayAttackAnim() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB859C))(this);
	}
	template <typename T = void> T StopAttackAnim() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB86B0))(this);
	}
	template <typename T = void> T OnBodyFragment(unsigned char bodyPart, Il2CppVector3 attackDir) {
		return ((T (*)(NetworkBrutus*, unsigned char, Il2CppVector3))(Il2CppBase() + 0x3EB87C4))(this, bodyPart, attackDir);
	}
	template <typename T = bool> T PlaySpecialSound(uintptr_t damageInfo) {
		return ((T (*)(NetworkBrutus*, uintptr_t))(Il2CppBase() + 0x3EB89B0))(this, damageInfo);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkBrutus*, bool))(Il2CppBase() + 0x3EB8B78))(this, isHeadShot);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB8CA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkBrutus*, uintptr_t))(Il2CppBase() + 0x3EB8CA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkBrutus*))(Il2CppBase() + 0x3EB8CA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_PlaySpecialSound(uintptr_t P0) {
		return ((T (*)(NetworkBrutus*, uintptr_t))(Il2CppBase() + 0x3EB8CAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkBrutus*, bool))(Il2CppBase() + 0x3EB8CB0))(this, P0);
	}

};

}
