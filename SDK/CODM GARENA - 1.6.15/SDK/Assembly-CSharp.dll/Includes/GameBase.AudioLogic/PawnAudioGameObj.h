#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class PawnAudioGameObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "PawnAudioGameObj"));
	}

	template <typename T = float> static T& kAnglMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kAnglMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kAnglRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& kDistMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> T& mVecAcousticPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& mLastForward() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> static T& DrawAcousticPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> T& mFixedUp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T SetOwner(uintptr_t pOwner) {
		return ((T (*)(PawnAudioGameObj*, uintptr_t))(Il2CppBase() + 0x3B9C96C))(this, pOwner);
	}
	template <typename T = Il2CppVector3> T GetForward() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9CA88))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9CEB0))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(bool needUpdateCachedTransform) {
		return ((T (*)(PawnAudioGameObj*, bool))(Il2CppBase() + 0x3B9D048))(this, needUpdateCachedTransform);
	}
	template <typename T = Il2CppVector3> T GetUpward() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9D788))(this);
	}
	template <typename T = Il2CppVector3> T GetRight() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9D8D8))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetForward() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9DAB0))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetPosition(bool P0) {
		return ((T (*)(PawnAudioGameObj*, bool))(Il2CppBase() + 0x3B9DAC4))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetUpward() {
		return ((T (*)(PawnAudioGameObj*))(Il2CppBase() + 0x3B9DAD8))(this);
	}

};

}
